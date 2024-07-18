/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.8 */

#ifndef PB_ECAL_PB_LAYER_PB_H_INCLUDED
#define PB_ECAL_PB_LAYER_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
typedef enum _eCAL_pb_eTLayerType { /* Reserved fields in enums are not supported in protobuf 3.0
 reserved 2, 3, 42; */
    eCAL_pb_eTLayerType_tl_none = 0, /* undefined */
    eCAL_pb_eTLayerType_tl_ecal_udp_mc = 1, /* ecal udp multicast */
    /* 2 = ecal udp unicast (not supported anymore)
 3 = ecal udp metal (not supported anymore) */
    eCAL_pb_eTLayerType_tl_ecal_shm = 4, /* ecal shared memory */
    eCAL_pb_eTLayerType_tl_ecal_tcp = 5, /* ecal tcp */
    /* 42 = inproc (not supported anymore) */
    eCAL_pb_eTLayerType_tl_all = 255 /* all layer */
} eCAL_pb_eTLayerType;

/* Struct definitions */
typedef struct _eCAL_pb_LayerParUdpMC {
    char dummy_field;
} eCAL_pb_LayerParUdpMC;

typedef struct _eCAL_pb_LayerParShm {
    pb_callback_t memory_file_list; /* list of memory file names */
} eCAL_pb_LayerParShm;

typedef struct _eCAL_pb_LayerParTcp {
    int32_t port; /* tcp writers port number */
} eCAL_pb_LayerParTcp;

typedef struct _eCAL_pb_ConnnectionPar { /* Reserved fields in enums are not supported in protobuf 3.0
 reserved 3; */
    bool has_layer_par_udpmc;
    eCAL_pb_LayerParUdpMC layer_par_udpmc; /* parameter for ecal udp multicast */
    bool has_layer_par_shm;
    eCAL_pb_LayerParShm layer_par_shm; /* parameter for ecal shared memory */
    /* 3 = parameter for ecal inner process */
    bool has_layer_par_tcp;
    eCAL_pb_LayerParTcp layer_par_tcp; /* parameter for ecal tcp */
} eCAL_pb_ConnnectionPar;

typedef struct _eCAL_pb_TLayer { /* Reserved fields in enums are not supported in protobuf 3.0
 reserved 4; */
    eCAL_pb_eTLayerType type; /* transport layer type */
    int32_t version; /* transport layer version */
    bool active; /* transport layer in use ? */
    bool has_par_layer;
    eCAL_pb_ConnnectionPar par_layer; /* transport layer parameter */
    bool enabled; /* transport layer enabled ? */
} eCAL_pb_TLayer;


#ifdef __cplusplus
extern "C" {
#endif

/* Helper constants for enums */
#define _eCAL_pb_eTLayerType_MIN eCAL_pb_eTLayerType_tl_none
#define _eCAL_pb_eTLayerType_MAX eCAL_pb_eTLayerType_tl_all
#define _eCAL_pb_eTLayerType_ARRAYSIZE ((eCAL_pb_eTLayerType)(eCAL_pb_eTLayerType_tl_all+1))





#define eCAL_pb_TLayer_type_ENUMTYPE eCAL_pb_eTLayerType


/* Initializer values for message structs */
#define eCAL_pb_LayerParUdpMC_init_default       {0}
#define eCAL_pb_LayerParShm_init_default         {{{NULL}, NULL}}
#define eCAL_pb_LayerParTcp_init_default         {0}
#define eCAL_pb_ConnnectionPar_init_default      {false, eCAL_pb_LayerParUdpMC_init_default, false, eCAL_pb_LayerParShm_init_default, false, eCAL_pb_LayerParTcp_init_default}
#define eCAL_pb_TLayer_init_default              {_eCAL_pb_eTLayerType_MIN, 0, 0, false, eCAL_pb_ConnnectionPar_init_default, 0}
#define eCAL_pb_LayerParUdpMC_init_zero          {0}
#define eCAL_pb_LayerParShm_init_zero            {{{NULL}, NULL}}
#define eCAL_pb_LayerParTcp_init_zero            {0}
#define eCAL_pb_ConnnectionPar_init_zero         {false, eCAL_pb_LayerParUdpMC_init_zero, false, eCAL_pb_LayerParShm_init_zero, false, eCAL_pb_LayerParTcp_init_zero}
#define eCAL_pb_TLayer_init_zero                 {_eCAL_pb_eTLayerType_MIN, 0, 0, false, eCAL_pb_ConnnectionPar_init_zero, 0}

/* Field tags (for use in manual encoding/decoding) */
#define eCAL_pb_LayerParShm_memory_file_list_tag 1
#define eCAL_pb_LayerParTcp_port_tag             1
#define eCAL_pb_ConnnectionPar_layer_par_udpmc_tag 1
#define eCAL_pb_ConnnectionPar_layer_par_shm_tag 2
#define eCAL_pb_ConnnectionPar_layer_par_tcp_tag 4
#define eCAL_pb_TLayer_type_tag                  1
#define eCAL_pb_TLayer_version_tag               2
#define eCAL_pb_TLayer_active_tag                3
#define eCAL_pb_TLayer_par_layer_tag             5
#define eCAL_pb_TLayer_enabled_tag               6

/* Struct field encoding specification for nanopb */
#define eCAL_pb_LayerParUdpMC_FIELDLIST(X, a) \

#define eCAL_pb_LayerParUdpMC_CALLBACK NULL
#define eCAL_pb_LayerParUdpMC_DEFAULT NULL

#define eCAL_pb_LayerParShm_FIELDLIST(X, a) \
X(a, CALLBACK, REPEATED, STRING,   memory_file_list,   1)
#define eCAL_pb_LayerParShm_CALLBACK pb_default_field_callback
#define eCAL_pb_LayerParShm_DEFAULT NULL

#define eCAL_pb_LayerParTcp_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, INT32,    port,              1)
#define eCAL_pb_LayerParTcp_CALLBACK NULL
#define eCAL_pb_LayerParTcp_DEFAULT NULL

#define eCAL_pb_ConnnectionPar_FIELDLIST(X, a) \
X(a, STATIC,   OPTIONAL, MESSAGE,  layer_par_udpmc,   1) \
X(a, STATIC,   OPTIONAL, MESSAGE,  layer_par_shm,     2) \
X(a, STATIC,   OPTIONAL, MESSAGE,  layer_par_tcp,     4)
#define eCAL_pb_ConnnectionPar_CALLBACK NULL
#define eCAL_pb_ConnnectionPar_DEFAULT NULL
#define eCAL_pb_ConnnectionPar_layer_par_udpmc_MSGTYPE eCAL_pb_LayerParUdpMC
#define eCAL_pb_ConnnectionPar_layer_par_shm_MSGTYPE eCAL_pb_LayerParShm
#define eCAL_pb_ConnnectionPar_layer_par_tcp_MSGTYPE eCAL_pb_LayerParTcp

#define eCAL_pb_TLayer_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UENUM,    type,              1) \
X(a, STATIC,   SINGULAR, INT32,    version,           2) \
X(a, STATIC,   SINGULAR, BOOL,     active,            3) \
X(a, STATIC,   OPTIONAL, MESSAGE,  par_layer,         5) \
X(a, STATIC,   SINGULAR, BOOL,     enabled,           6)
#define eCAL_pb_TLayer_CALLBACK NULL
#define eCAL_pb_TLayer_DEFAULT NULL
#define eCAL_pb_TLayer_par_layer_MSGTYPE eCAL_pb_ConnnectionPar

extern const pb_msgdesc_t eCAL_pb_LayerParUdpMC_msg;
extern const pb_msgdesc_t eCAL_pb_LayerParShm_msg;
extern const pb_msgdesc_t eCAL_pb_LayerParTcp_msg;
extern const pb_msgdesc_t eCAL_pb_ConnnectionPar_msg;
extern const pb_msgdesc_t eCAL_pb_TLayer_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define eCAL_pb_LayerParUdpMC_fields &eCAL_pb_LayerParUdpMC_msg
#define eCAL_pb_LayerParShm_fields &eCAL_pb_LayerParShm_msg
#define eCAL_pb_LayerParTcp_fields &eCAL_pb_LayerParTcp_msg
#define eCAL_pb_ConnnectionPar_fields &eCAL_pb_ConnnectionPar_msg
#define eCAL_pb_TLayer_fields &eCAL_pb_TLayer_msg

/* Maximum encoded size of messages (where known) */
/* eCAL_pb_LayerParShm_size depends on runtime parameters */
/* eCAL_pb_ConnnectionPar_size depends on runtime parameters */
/* eCAL_pb_TLayer_size depends on runtime parameters */
#define ECAL_PB_LAYER_PB_H_MAX_SIZE              eCAL_pb_LayerParTcp_size
#define eCAL_pb_LayerParTcp_size                 11
#define eCAL_pb_LayerParUdpMC_size               0

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
