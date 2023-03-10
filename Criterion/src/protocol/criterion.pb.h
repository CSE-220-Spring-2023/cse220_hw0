/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.5 */

#ifndef PB_CRITERION_PROTOCOL_CRITERION_PB_H_INCLUDED
#define PB_CRITERION_PROTOCOL_CRITERION_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
typedef enum _criterion_protocol_phase_kind {
    criterion_protocol_phase_kind_SETUP = 1,
    criterion_protocol_phase_kind_MAIN = 2,
    criterion_protocol_phase_kind_TEARDOWN = 3,
    criterion_protocol_phase_kind_END = 4,
    criterion_protocol_phase_kind_ABORT = 5,
    criterion_protocol_phase_kind_TIMEOUT = 6,
    criterion_protocol_phase_kind_SKIP = 7
} criterion_protocol_phase_kind;

typedef enum _criterion_protocol_death_result_type {
    criterion_protocol_death_result_type_NORMAL = 1,
    criterion_protocol_death_result_type_CRASH = 2
} criterion_protocol_death_result_type;

typedef enum _criterion_protocol_log_level {
    criterion_protocol_log_level_INFO = 0,
    criterion_protocol_log_level_WARNING = 1,
    criterion_protocol_log_level_ERROR = 2
} criterion_protocol_log_level;

typedef enum _criterion_protocol_ack_status {
    criterion_protocol_ack_status_OK = 0,
    criterion_protocol_ack_status_ERROR = 1
} criterion_protocol_ack_status;

/* Struct definitions */
typedef struct _criterion_protocol_param_entry {
    char *name;
    pb_size_t which_data;
    union {
        pb_bytes_array_t *raw;
        char *str;
    } data;
} criterion_protocol_param_entry;

typedef struct _criterion_protocol_param_list {
    pb_size_t list_count;
    struct _criterion_protocol_param_entry *list;
} criterion_protocol_param_list;

typedef struct _criterion_protocol_result {
    char *repr;
    char *message;
    pb_size_t which_value;
    union {
        struct _criterion_protocol_param_list *params;
        char *formatted;
    } value;
} criterion_protocol_result;

typedef struct _criterion_protocol_ack {
    criterion_protocol_ack_status status_code;
    char *message;
} criterion_protocol_ack;

typedef struct _criterion_protocol_assert {
    char *message;
    bool passed;
    char *file;
    bool has_line;
    int64_t line;
    bool has_timestamp;
    int64_t timestamp;
    pb_size_t results_count;
    struct _criterion_protocol_result *results;
} criterion_protocol_assert;

typedef struct _criterion_protocol_birth {
    char *name;
    bool has_timestamp;
    int64_t timestamp;
} criterion_protocol_birth;

typedef struct _criterion_protocol_death {
    criterion_protocol_death_result_type result;
    bool has_status;
    int64_t status;
    bool has_timestamp;
    int64_t timestamp;
} criterion_protocol_death;

typedef struct _criterion_protocol_log {
    criterion_protocol_log_level severity;
    char *message;
    bool has_timestamp;
    int64_t timestamp;
} criterion_protocol_log;

typedef struct _criterion_protocol_phase {
    criterion_protocol_phase_kind phase;
    char *name;
    bool has_timestamp;
    int64_t timestamp;
    char *message;
} criterion_protocol_phase;

typedef struct _criterion_protocol_statistic {
    char *key;
    pb_size_t which_value;
    union {
        uint64_t num;
        char *str;
    } value;
} criterion_protocol_statistic;

typedef struct _criterion_protocol_submessage {
    pb_size_t which_value;
    union {
        criterion_protocol_birth birth;
        criterion_protocol_phase phase;
        criterion_protocol_death death;
        criterion_protocol_log message;
        criterion_protocol_assert assert;
        criterion_protocol_statistic statistic;
    } value;
} criterion_protocol_submessage;

typedef struct _criterion_protocol_msg {
    int32_t version;
    pb_size_t which_id;
    union {
        int64_t pid;
        char *uid;
    } id;
    criterion_protocol_submessage data;
} criterion_protocol_msg;


/* Helper constants for enums */
#define _criterion_protocol_phase_kind_MIN criterion_protocol_phase_kind_SETUP
#define _criterion_protocol_phase_kind_MAX criterion_protocol_phase_kind_SKIP
#define _criterion_protocol_phase_kind_ARRAYSIZE ((criterion_protocol_phase_kind)(criterion_protocol_phase_kind_SKIP+1))

#define _criterion_protocol_death_result_type_MIN criterion_protocol_death_result_type_NORMAL
#define _criterion_protocol_death_result_type_MAX criterion_protocol_death_result_type_CRASH
#define _criterion_protocol_death_result_type_ARRAYSIZE ((criterion_protocol_death_result_type)(criterion_protocol_death_result_type_CRASH+1))

#define _criterion_protocol_log_level_MIN criterion_protocol_log_level_INFO
#define _criterion_protocol_log_level_MAX criterion_protocol_log_level_ERROR
#define _criterion_protocol_log_level_ARRAYSIZE ((criterion_protocol_log_level)(criterion_protocol_log_level_ERROR+1))

#define _criterion_protocol_ack_status_MIN criterion_protocol_ack_status_OK
#define _criterion_protocol_ack_status_MAX criterion_protocol_ack_status_ERROR
#define _criterion_protocol_ack_status_ARRAYSIZE ((criterion_protocol_ack_status)(criterion_protocol_ack_status_ERROR+1))


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define criterion_protocol_birth_init_default    {NULL, false, 0}
#define criterion_protocol_phase_init_default    {_criterion_protocol_phase_kind_MIN, NULL, false, 0, NULL}
#define criterion_protocol_death_init_default    {_criterion_protocol_death_result_type_MIN, false, 0, false, 0}
#define criterion_protocol_statistic_init_default {NULL, 0, {0}}
#define criterion_protocol_param_entry_init_default {NULL, 0, {NULL}}
#define criterion_protocol_param_list_init_default {0, NULL}
#define criterion_protocol_result_init_default   {NULL, NULL, 0, {NULL}}
#define criterion_protocol_assert_init_default   {NULL, 0, NULL, false, 0, false, 0, 0, NULL}
#define criterion_protocol_log_init_default      {_criterion_protocol_log_level_MIN, NULL, false, 0}
#define criterion_protocol_ack_init_default      {_criterion_protocol_ack_status_MIN, NULL}
#define criterion_protocol_submessage_init_default {0, {criterion_protocol_birth_init_default}}
#define criterion_protocol_msg_init_default      {1, 0, {0}, criterion_protocol_submessage_init_default}
#define criterion_protocol_birth_init_zero       {NULL, false, 0}
#define criterion_protocol_phase_init_zero       {_criterion_protocol_phase_kind_MIN, NULL, false, 0, NULL}
#define criterion_protocol_death_init_zero       {_criterion_protocol_death_result_type_MIN, false, 0, false, 0}
#define criterion_protocol_statistic_init_zero   {NULL, 0, {0}}
#define criterion_protocol_param_entry_init_zero {NULL, 0, {NULL}}
#define criterion_protocol_param_list_init_zero  {0, NULL}
#define criterion_protocol_result_init_zero      {NULL, NULL, 0, {NULL}}
#define criterion_protocol_assert_init_zero      {NULL, 0, NULL, false, 0, false, 0, 0, NULL}
#define criterion_protocol_log_init_zero         {_criterion_protocol_log_level_MIN, NULL, false, 0}
#define criterion_protocol_ack_init_zero         {_criterion_protocol_ack_status_MIN, NULL}
#define criterion_protocol_submessage_init_zero  {0, {criterion_protocol_birth_init_zero}}
#define criterion_protocol_msg_init_zero         {0, 0, {0}, criterion_protocol_submessage_init_zero}

/* Field tags (for use in manual encoding/decoding) */
#define criterion_protocol_param_entry_name_tag  1
#define criterion_protocol_param_entry_raw_tag   2
#define criterion_protocol_param_entry_str_tag   3
#define criterion_protocol_param_list_list_tag   1
#define criterion_protocol_result_repr_tag       1
#define criterion_protocol_result_message_tag    2
#define criterion_protocol_result_params_tag     3
#define criterion_protocol_result_formatted_tag  4
#define criterion_protocol_ack_status_code_tag   1
#define criterion_protocol_ack_message_tag       2
#define criterion_protocol_assert_message_tag    1
#define criterion_protocol_assert_passed_tag     2
#define criterion_protocol_assert_file_tag       3
#define criterion_protocol_assert_line_tag       4
#define criterion_protocol_assert_timestamp_tag  5
#define criterion_protocol_assert_results_tag    6
#define criterion_protocol_birth_name_tag        1
#define criterion_protocol_birth_timestamp_tag   2
#define criterion_protocol_death_result_tag      1
#define criterion_protocol_death_status_tag      2
#define criterion_protocol_death_timestamp_tag   3
#define criterion_protocol_log_severity_tag      1
#define criterion_protocol_log_message_tag       2
#define criterion_protocol_log_timestamp_tag     3
#define criterion_protocol_phase_phase_tag       1
#define criterion_protocol_phase_name_tag        2
#define criterion_protocol_phase_timestamp_tag   3
#define criterion_protocol_phase_message_tag     4
#define criterion_protocol_statistic_key_tag     1
#define criterion_protocol_statistic_num_tag     3
#define criterion_protocol_statistic_str_tag     4
#define criterion_protocol_submessage_birth_tag  1
#define criterion_protocol_submessage_phase_tag  2
#define criterion_protocol_submessage_death_tag  3
#define criterion_protocol_submessage_message_tag 4
#define criterion_protocol_submessage_assert_tag 5
#define criterion_protocol_submessage_statistic_tag 6
#define criterion_protocol_msg_version_tag       1
#define criterion_protocol_msg_pid_tag           2
#define criterion_protocol_msg_uid_tag           3
#define criterion_protocol_msg_data_tag          16

/* Struct field encoding specification for nanopb */
#define criterion_protocol_birth_FIELDLIST(X, a) \
X(a, POINTER,  REQUIRED, STRING,   name,              1) \
X(a, STATIC,   OPTIONAL, INT64,    timestamp,         2)
#define criterion_protocol_birth_CALLBACK NULL
#define criterion_protocol_birth_DEFAULT NULL

#define criterion_protocol_phase_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, UENUM,    phase,             1) \
X(a, POINTER,  OPTIONAL, STRING,   name,              2) \
X(a, STATIC,   OPTIONAL, INT64,    timestamp,         3) \
X(a, POINTER,  OPTIONAL, STRING,   message,           4)
#define criterion_protocol_phase_CALLBACK NULL
#define criterion_protocol_phase_DEFAULT (const pb_byte_t*)"\x08\x01\x00"

#define criterion_protocol_death_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, UENUM,    result,            1) \
X(a, STATIC,   OPTIONAL, INT64,    status,            2) \
X(a, STATIC,   OPTIONAL, INT64,    timestamp,         3)
#define criterion_protocol_death_CALLBACK NULL
#define criterion_protocol_death_DEFAULT (const pb_byte_t*)"\x08\x01\x00"

#define criterion_protocol_statistic_FIELDLIST(X, a) \
X(a, POINTER,  REQUIRED, STRING,   key,               1) \
X(a, STATIC,   ONEOF,    UINT64,   (value,num,value.num),   3) \
X(a, POINTER,  ONEOF,    STRING,   (value,str,value.str),   4)
#define criterion_protocol_statistic_CALLBACK NULL
#define criterion_protocol_statistic_DEFAULT NULL

#define criterion_protocol_param_entry_FIELDLIST(X, a) \
X(a, POINTER,  OPTIONAL, STRING,   name,              1) \
X(a, POINTER,  ONEOF,    BYTES,    (data,raw,data.raw),   2) \
X(a, POINTER,  ONEOF,    STRING,   (data,str,data.str),   3)
#define criterion_protocol_param_entry_CALLBACK NULL
#define criterion_protocol_param_entry_DEFAULT NULL

#define criterion_protocol_param_list_FIELDLIST(X, a) \
X(a, POINTER,  REPEATED, MESSAGE,  list,              1)
#define criterion_protocol_param_list_CALLBACK NULL
#define criterion_protocol_param_list_DEFAULT NULL
#define criterion_protocol_param_list_list_MSGTYPE criterion_protocol_param_entry

#define criterion_protocol_result_FIELDLIST(X, a) \
X(a, POINTER,  REQUIRED, STRING,   repr,              1) \
X(a, POINTER,  OPTIONAL, STRING,   message,           2) \
X(a, POINTER,  ONEOF,    MESSAGE,  (value,params,value.params),   3) \
X(a, POINTER,  ONEOF,    STRING,   (value,formatted,value.formatted),   4)
#define criterion_protocol_result_CALLBACK NULL
#define criterion_protocol_result_DEFAULT NULL
#define criterion_protocol_result_value_params_MSGTYPE criterion_protocol_param_list

#define criterion_protocol_assert_FIELDLIST(X, a) \
X(a, POINTER,  REQUIRED, STRING,   message,           1) \
X(a, STATIC,   REQUIRED, BOOL,     passed,            2) \
X(a, POINTER,  OPTIONAL, STRING,   file,              3) \
X(a, STATIC,   OPTIONAL, INT64,    line,              4) \
X(a, STATIC,   OPTIONAL, INT64,    timestamp,         5) \
X(a, POINTER,  REPEATED, MESSAGE,  results,           6)
#define criterion_protocol_assert_CALLBACK NULL
#define criterion_protocol_assert_DEFAULT NULL
#define criterion_protocol_assert_results_MSGTYPE criterion_protocol_result

#define criterion_protocol_log_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, UENUM,    severity,          1) \
X(a, POINTER,  REQUIRED, STRING,   message,           2) \
X(a, STATIC,   OPTIONAL, INT64,    timestamp,         3)
#define criterion_protocol_log_CALLBACK NULL
#define criterion_protocol_log_DEFAULT NULL

#define criterion_protocol_ack_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, UENUM,    status_code,       1) \
X(a, POINTER,  OPTIONAL, STRING,   message,           2)
#define criterion_protocol_ack_CALLBACK NULL
#define criterion_protocol_ack_DEFAULT NULL

#define criterion_protocol_submessage_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    MESSAGE,  (value,birth,value.birth),   1) \
X(a, STATIC,   ONEOF,    MESSAGE,  (value,phase,value.phase),   2) \
X(a, STATIC,   ONEOF,    MESSAGE,  (value,death,value.death),   3) \
X(a, STATIC,   ONEOF,    MESSAGE,  (value,message,value.message),   4) \
X(a, STATIC,   ONEOF,    MESSAGE,  (value,assert,value.assert),   5) \
X(a, STATIC,   ONEOF,    MESSAGE,  (value,statistic,value.statistic),   6)
#define criterion_protocol_submessage_CALLBACK NULL
#define criterion_protocol_submessage_DEFAULT NULL
#define criterion_protocol_submessage_value_birth_MSGTYPE criterion_protocol_birth
#define criterion_protocol_submessage_value_phase_MSGTYPE criterion_protocol_phase
#define criterion_protocol_submessage_value_death_MSGTYPE criterion_protocol_death
#define criterion_protocol_submessage_value_message_MSGTYPE criterion_protocol_log
#define criterion_protocol_submessage_value_assert_MSGTYPE criterion_protocol_assert
#define criterion_protocol_submessage_value_statistic_MSGTYPE criterion_protocol_statistic

#define criterion_protocol_msg_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, INT32,    version,           1) \
X(a, STATIC,   ONEOF,    INT64,    (id,pid,id.pid),   2) \
X(a, POINTER,  ONEOF,    STRING,   (id,uid,id.uid),   3) \
X(a, STATIC,   REQUIRED, MESSAGE,  data,             16)
#define criterion_protocol_msg_CALLBACK NULL
#define criterion_protocol_msg_DEFAULT (const pb_byte_t*)"\x08\x01\x00"
#define criterion_protocol_msg_data_MSGTYPE criterion_protocol_submessage

extern const pb_msgdesc_t criterion_protocol_birth_msg;
extern const pb_msgdesc_t criterion_protocol_phase_msg;
extern const pb_msgdesc_t criterion_protocol_death_msg;
extern const pb_msgdesc_t criterion_protocol_statistic_msg;
extern const pb_msgdesc_t criterion_protocol_param_entry_msg;
extern const pb_msgdesc_t criterion_protocol_param_list_msg;
extern const pb_msgdesc_t criterion_protocol_result_msg;
extern const pb_msgdesc_t criterion_protocol_assert_msg;
extern const pb_msgdesc_t criterion_protocol_log_msg;
extern const pb_msgdesc_t criterion_protocol_ack_msg;
extern const pb_msgdesc_t criterion_protocol_submessage_msg;
extern const pb_msgdesc_t criterion_protocol_msg_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define criterion_protocol_birth_fields &criterion_protocol_birth_msg
#define criterion_protocol_phase_fields &criterion_protocol_phase_msg
#define criterion_protocol_death_fields &criterion_protocol_death_msg
#define criterion_protocol_statistic_fields &criterion_protocol_statistic_msg
#define criterion_protocol_param_entry_fields &criterion_protocol_param_entry_msg
#define criterion_protocol_param_list_fields &criterion_protocol_param_list_msg
#define criterion_protocol_result_fields &criterion_protocol_result_msg
#define criterion_protocol_assert_fields &criterion_protocol_assert_msg
#define criterion_protocol_log_fields &criterion_protocol_log_msg
#define criterion_protocol_ack_fields &criterion_protocol_ack_msg
#define criterion_protocol_submessage_fields &criterion_protocol_submessage_msg
#define criterion_protocol_msg_fields &criterion_protocol_msg_msg

/* Maximum encoded size of messages (where known) */
/* criterion_protocol_birth_size depends on runtime parameters */
/* criterion_protocol_phase_size depends on runtime parameters */
/* criterion_protocol_statistic_size depends on runtime parameters */
/* criterion_protocol_param_entry_size depends on runtime parameters */
/* criterion_protocol_param_list_size depends on runtime parameters */
/* criterion_protocol_result_size depends on runtime parameters */
/* criterion_protocol_assert_size depends on runtime parameters */
/* criterion_protocol_log_size depends on runtime parameters */
/* criterion_protocol_ack_size depends on runtime parameters */
/* criterion_protocol_submessage_size depends on runtime parameters */
/* criterion_protocol_msg_size depends on runtime parameters */
#define criterion_protocol_death_size            24

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
