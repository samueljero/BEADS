/* Copyright (c) 2008 The Board of Trustees of The Leland Stanford Junior University */
/* Copyright (c) 2011, 2012 Open Networking Foundation */
/* Copyright (c) 2012, 2013 Big Switch Networks, Inc. */
/* See the file LICENSE.loci which should have been included in the source distribution */
#ifdef __GNUC__

#ifdef __linux__
/* glibc */
#include <features.h>
#else
/* NetBSD etc */
#include <sys/cdefs.h>
#ifdef __GNUC_PREREQ__
#define __GNUC_PREREQ __GNUC_PREREQ__
#endif
#endif

#ifndef __GNUC_PREREQ
/* fallback */
#define __GNUC_PREREQ(maj, min) 0
#endif

#if __GNUC_PREREQ(4,6)
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif

#endif

#include "loci_log.h"
#include "loci_int.h"

/**
 * Associate an iterator with a list
 * @param list The list to iterate over
 * @param obj The list entry iteration pointer
 * @return OF_ERROR_RANGE if the list is empty (end of list)
 *
 * The obj instance is completely initialized.  The caller is responsible
 * for cleaning up any wire buffers associated with obj before this call
 */

int
of_list_table_stats_entry_first(of_list_table_stats_entry_t *list, of_object_t *obj)
{
    int rv;

    of_table_stats_entry_init(obj, list->version, -1, 1);

    if ((rv = of_list_first(list, obj)) < 0) {
        return rv;
    }



    return rv;
}

/**
 * Advance an iterator to the next element in a list
 * @param list The list being iterated
 * @param obj The list entry iteration pointer
 * @return OF_ERROR_RANGE if already at the last entry on the list
 *
 */

int
of_list_table_stats_entry_next(of_list_table_stats_entry_t *list, of_object_t *obj)
{
    int rv;

    if ((rv = of_list_next(list, obj)) < 0) {
        return rv;
    }



    return rv;
}

/**
 * Set up to append an object of type of_table_stats_entry to an of_list_table_stats_entry.
 * @param list The list that is prepared for append
 * @param obj Pointer to object to hold data to append
 *
 * The obj instance is completely initialized.  The caller is responsible
 * for cleaning up any wire buffers associated with obj before this call.
 *
 * See the generic documentation for of_list_append_bind.
 */

int
of_list_table_stats_entry_append_bind(of_list_table_stats_entry_t *list, of_object_t *obj)
{
    return of_list_append_bind(list, obj);
}

/**
 * Append an object to a of_list_table_stats_entry list.
 *
 * This copies data from obj and leaves item untouched.
 *
 * See the generic documentation for of_list_append.
 */

int
of_list_table_stats_entry_append(of_list_table_stats_entry_t *list, of_object_t *obj)
{
    return of_list_append(list, obj);
}

/**
 * \defgroup of_list_table_stats_entry of_list_table_stats_entry
 */

/**
 * Create a new of_list_table_stats_entry object
 *
 * @param version The wire version to use for the object
 * @return Pointer to the newly create object or NULL on error
 *
 * Initializes the new object with it's default fixed length associating
 * a new underlying wire buffer.
 *
 * \ingroup of_list_table_stats_entry
 */

of_object_t *
of_list_table_stats_entry_new(of_version_t version)
{
    of_object_t *obj;
    int bytes;

    bytes = of_object_fixed_len[version][OF_LIST_TABLE_STATS_ENTRY];

    if ((obj = of_object_new(OF_WIRE_BUFFER_MAX_LENGTH)) == NULL) {
        return NULL;
    }

    of_list_table_stats_entry_init(obj, version, bytes, 0);

    return obj;
}

/**
 * Initialize an object of type of_list_table_stats_entry.
 *
 * @param obj Pointer to the object to initialize
 * @param version The wire version to use for the object
 * @param bytes How many bytes in the object
 * @param clean_wire Boolean: If true, clear the wire object control struct
 *
 * If bytes < 0, then the default fixed length is used for the object
 *
 * This is a "coerce" function that sets up the pointers for the
 * accessors properly.
 *
 * If anything other than 0 is passed in for the buffer size, the underlying
 * wire buffer will have 'grow' called.
 */

void
of_list_table_stats_entry_init(of_object_t *obj,
    of_version_t version, int bytes, int clean_wire)
{
    LOCI_ASSERT(of_object_fixed_len[version][OF_LIST_TABLE_STATS_ENTRY] >= 0);
    if (clean_wire) {
        MEMSET(obj, 0, sizeof(*obj));
    }
    if (bytes < 0) {
        bytes = of_object_fixed_len[version][OF_LIST_TABLE_STATS_ENTRY];
    }
    obj->version = version;
    obj->length = bytes;
    obj->object_id = OF_LIST_TABLE_STATS_ENTRY;

    /* Grow the wire buffer */
    if (obj->wbuf != NULL) {
        int tot_bytes;

        tot_bytes = bytes + obj->obj_offset;
        of_wire_buffer_grow(obj->wbuf, tot_bytes);
    }
}
