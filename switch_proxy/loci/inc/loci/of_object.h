/* Copyright (c) 2008 The Board of Trustees of The Leland Stanford Junior University */
/* Copyright (c) 2011, 2012 Open Networking Foundation */
/* Copyright (c) 2012, 2013 Big Switch Networks, Inc. */
/* See the file LICENSE.loci which should have been included in the source distribution */

/*
 * @fixme THIS FILE NEEDS CLEANUP.  It may just go away.
 * 
 * Low level internal header file.  Defines inheritance mechanism for
 * LOCI objects.  In general, the routines in this file should not be
 * called directly.  Rather the class-specific operations should be 
 * used from loci.h.
 *
 * TREAT THESE FUNCTIONS AS PRIVATE.  THEY ARE GENERALLY HELPER
 * FUNCTIONS FOR LOCI TYPE SPECIFIC IMPLEMENTATIONS
 */

#if !defined(_OF_OBJECT_H_)
#define _OF_OBJECT_H_

#include <loci/of_buffer.h>
#include <loci/of_match.h>
#include <loci/loci_base.h>
#include <loci/of_message.h>
#include <loci/of_wire_buf.h>

/****************************************************************
 * General list operations: first, next, append_setup, append_advance
 ****************************************************************/

/* General list first operation */
extern int of_list_first(of_object_t *parent, of_object_t *child);

/* General list next operation */
extern int of_list_next(of_object_t *parent, of_object_t *child);

/* General list append bind operation */
extern int of_list_append_bind(of_object_t *parent, of_object_t *child);

/* Append a copy of item to list */
extern int of_list_append(of_object_t *list, of_object_t *item);

extern of_object_t *of_object_new(int bytes);
extern of_object_t *of_object_dup(of_object_t *src);

extern int of_object_xid_set(of_object_t *obj, uint32_t xid);
extern int of_object_xid_get(of_object_t *obj, uint32_t *xid);

/* Bind a buffer to an object, usually for parsing the buffer */
extern int of_object_buffer_bind(of_object_t *obj, uint8_t *buf, 
                                 int bytes, of_buffer_free_f buf_free);


/**
 * Steal a wire buffer from an object.
 * @param obj The object whose buffer is being removed
 * @param buffer[out] A handle for the pointer to the uint8_t * returned
 *
 * The wire buffer is taken from the object and its wirebuffer is set to
 * NULL.  The ref_count of the wire buffer is not changed.
 */
extern void of_object_wire_buffer_steal(of_object_t *obj, uint8_t **buffer);
extern int of_object_append_buffer(of_object_t *dst, of_object_t *src);

extern of_object_t *of_object_new_from_message(of_message_t msg, int len);

typedef struct of_object_storage_s of_object_storage_t;

of_object_t *of_object_new_from_message_preallocated(
    of_object_storage_t *storage, uint8_t *buf, int len);

/* Delete an OpenFlow object without reference to its type */
extern void of_object_delete(of_object_t *obj);

int of_object_can_grow(of_object_t *obj, int new_len);

void of_object_parent_length_update(of_object_t *obj, int delta);

void of_object_truncate(of_object_t *obj);

struct of_object_s {
    /** A pointer to the underlying buffer's management structure. */
    of_wire_buffer_t *wbuf;

    /** The start offset for this object relative to the start of the
     * underlying buffer */
    int obj_offset;

    /* The LOCI type enum value of the object */
    of_object_id_t object_id;

    /*
     * Objects need to track their "parent" so that updates to the
     * object that affect its length can be pushed to the parent.
     * Treat as private.
     */
    of_object_t *parent;

    /*
     * Not all objects have length and version on the wire so we keep
     * them here.  NOTE: Infrastructure manages length and version.
     * Treat length as private and version as read only.
     */
    int length;
    of_version_t version;
};

struct of_object_storage_s {
    of_object_t obj;
    of_wire_buffer_t wbuf;
};

/**
 * Connect a child to a parent at the wire buffer level
 *
 * @param parent The top level object to bind to
 * @param child The sub-object connecting to the parent
 * @param offset The offset at which to attach the child RELATIVE
 * TO THE PARENT in the buffer
 * @param bytes The amount of the buffer dedicated to the child
 */
static inline void
of_object_attach(of_object_t *parent, of_object_t *child, int offset, int length)
{
    child->parent = parent;
    child->wbuf = parent->wbuf;
    child->obj_offset = parent->obj_offset + offset;
    child->length = length;
}

#endif /* _OF_OBJECT_H_ */
