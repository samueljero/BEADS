/* Copyright (c) 2008 The Board of Trustees of The Leland Stanford Junior University */
/* Copyright (c) 2011, 2012 Open Networking Foundation */
/* Copyright (c) 2012, 2013 Big Switch Networks, Inc. */
/* See the file LICENSE.loci which should have been included in the source distribution */

#if !defined(_LOCI_SHOW_H_)
#define _LOCI_SHOW_H_

#include <loci/loci_base.h>
#include <loci/of_match.h>
#include <stdio.h>

/* g++ requires this to pick up PRI, etc.
 * See  http://gcc.gnu.org/ml/gcc-help/2006-10/msg00223.html
 */
#if !defined(__STDC_FORMAT_MACROS)
#define __STDC_FORMAT_MACROS
#endif
#include <inttypes.h>

typedef int (*loci_obj_show_f)(loci_writer_f writer,
                               void *cookie, of_object_t *obj);

/****************************************************************
 *
 * Per-datatype dump macros
 *
 ****************************************************************/
#define LOCI_SHOW_u8(writer, cookie, val) writer(cookie, "%u", (val))
#define LOCI_SHOW_u16(writer, cookie, val) writer(cookie, "%u (0x%x)", (val), (val))
#define LOCI_SHOW_u32(writer, cookie, val) writer(cookie, "%u (0x%x)", (val), (val))
#define LOCI_SHOW_u64(writer, cookie, val) writer(cookie, "%" PRIu64 "(0x%" PRIx64 ")", (val), (val))

#define LOCI_SHOW_D_INT(cookie, macro, val) writer(cookie, "%" macro , val); 
#define LOCI_SHOW_X_INT(cookie, macro, val) writer(cookie, "0x%" macro, val); 

#define LOCI_SHOW_x8(writer, cookie, val) LOCI_SHOW_X_INT(cookie,  PRIx8, val)
#define LOCI_SHOW_x16(writer, cookie, val) LOCI_SHOW_X_INT(cookie, PRIx16, val)
#define LOCI_SHOW_x32(writer, cookie, val) LOCI_SHOW_X_INT(cookie, PRIx32, val)
#define LOCI_SHOW_x64(writer, cookie, val) LOCI_SHOW_X_INT(cookie, PRIx64, val)
#define LOCI_SHOW_d8(writer, cookie, val) LOCI_SHOW_D_INT(cookie, PRId8, val)
#define LOCI_SHOW_d16(writer, cookie, val) LOCI_SHOW_D_INT(cookie, PRId16, val)
#define LOCI_SHOW_d32(writer, cookie, val) LOCI_SHOW_D_INT(cookie, PRId32, val)
#define LOCI_SHOW_d64(writer, cookie, val) LOCI_SHOW_D_INT(cookie, PRId64, val)

/* @todo Add checks for special port numbers */
#define LOCI_SHOW_port_no(writer, cookie, val) writer(cookie, "%d", val)
#define LOCI_SHOW_fm_cmd(writer, cookie, val) LOCI_SHOW_u16(writer, cookie, val)

/* @todo Decode wildcards */
#define LOCI_SHOW_wc_bmap(writer, cookie, val)         \
    writer(cookie, "0x%" PRIx64, (val))
#define LOCI_SHOW_match_bmap(writer, cookie, val)      \
    writer(cookie, "0x%" PRIx64, (val))

/* @todo Dump first N bytes of data */
#define LOCI_SHOW_octets(writer, cookie, val)                                      \
    writer(cookie, "%d bytes at location %p", (val).bytes, (val).data)

#define LOCI_SHOW_mac(writer, cookie, val)                                 \
    writer(cookie, "%02x:%02x:%02x:%02x:%02x:%02x",            \
               (val).addr[0], (val).addr[1], (val).addr[2],     \
               (val).addr[3], (val).addr[4], (val).addr[5])

#define LOCI_SHOW_ipv4(writer, cookie, val)                                        \
    writer(cookie, "%d.%d.%d.%d", val >> 24, (val >> 16) & 0xff,       \
               (val >> 8) & 0xff, val & 0xff)

#define LOCI_SHOW_ipv6(writer, cookie, val)                                        \
    writer(cookie, "%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x", \
               (val).addr[0], (val).addr[1], (val).addr[2], (val).addr[3], \
               (val).addr[4], (val).addr[5], (val).addr[6], (val).addr[7], \
               (val).addr[8], (val).addr[9], (val).addr[10], (val).addr[11], \
               (val).addr[12], (val).addr[13], (val).addr[14], (val).addr[15])

#define LOCI_SHOW_string(writer, cookie, val) writer(cookie, "%s", val)

#define LOCI_SHOW_port_name(writer, cookie, val) LOCI_SHOW_string(writer, cookie, val)
#define LOCI_SHOW_port_name_if_name(writer, cookie, val) LOCI_SHOW_string(writer, cookie, val)
#define LOCI_SHOW_tab_name(writer, cookie, val) LOCI_SHOW_string(writer, cookie, val)
#define LOCI_SHOW_desc_str(writer, cookie, val) LOCI_SHOW_string(writer, cookie, val)
#define LOCI_SHOW_ser_num(writer, cookie, val) LOCI_SHOW_string(writer, cookie, val)
#define LOCI_SHOW_str64(writer, cookie, val) LOCI_SHOW_string(writer, cookie, val)

int loci_show_match(loci_writer_f writer, void *cookie, of_match_t *match);
#define LOCI_SHOW_match(writer, cookie, val) loci_show_match(writer, cookie, &val)

#define LOCI_SHOW_bitmap_128(writer, cookie, val) writer(cookie, "%" PRIx64 "%" PRIx64, (val).hi, (val).lo)

#define LOCI_SHOW_checksum_128(writer, cookie, val) writer(cookie, "%016" PRIx64 "%016" PRIx64, (val).hi, (val).lo)

#define LOCI_SHOW_bitmap_512(writer, cookie, val) writer(cookie, "%" PRIx64 "%" PRIx64 "%" PRIx64 "%" PRIx64 "%" PRIx64 "%" PRIx64 "%" PRIx64 "%" PRIx64, (val).words[7], (val).words[6], (val).words[5], (val).words[4], (val).words[3], (val).words[2], (val).words[1], (val).words[0])

/**
 * Generic version for any object
 */
int of_object_show(loci_writer_f writer, void *cookie, of_object_t *obj);

#endif /* _LOCI_SHOW_H_ */
