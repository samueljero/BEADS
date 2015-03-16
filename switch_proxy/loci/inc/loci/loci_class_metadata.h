/* Copyright (c) 2008 The Board of Trustees of The Leland Stanford Junior University */
/* Copyright (c) 2011, 2012 Open Networking Foundation */
/* Copyright (c) 2012, 2013 Big Switch Networks, Inc. */
/* See the file LICENSE.loci which should have been included in the source distribution */
#ifndef __LOCI_CLASS_METADATA_H__
#define __LOCI_CLASS_METADATA_H__

typedef void (*of_wire_length_get_f)(of_object_t *obj, int *bytes);
typedef void (*of_wire_length_set_f)(of_object_t *obj, int bytes);
typedef void (*of_wire_type_get_f)(of_object_t *obj, of_object_id_t *id);
typedef void (*of_wire_type_set_f)(of_object_t *obj);

struct loci_class_metadata {
    of_wire_length_get_f wire_length_get;
    of_wire_length_set_f wire_length_set;
    of_wire_type_get_f wire_type_get;
    of_wire_type_set_f wire_type_set;
};

extern struct loci_class_metadata loci_class_metadata[OF_OBJECT_COUNT];

static inline void
of_object_wire_length_set(of_object_t *obj, int bytes)
{
    if (loci_class_metadata[obj->object_id].wire_length_set) {
        loci_class_metadata[obj->object_id].wire_length_set(obj, bytes);
    }
}

static inline void
of_object_wire_type_set(of_object_t *obj)
{
    if (loci_class_metadata[obj->object_id].wire_type_set) {
        loci_class_metadata[obj->object_id].wire_type_set(obj);
    }
}

#endif
