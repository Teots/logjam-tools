#ifndef __LOGJAM_IMPORTER_LIVESTREAM_H_INCLUDED__
#define __LOGJAM_IMPORTER_LIVESTREAM_H_INCLUDED__

#include "importer-common.h"
#include "importer-streaminfo.h"

#ifdef __cplusplus
extern "C" {
#endif

extern void live_stream_actor_fn(zsock_t *pipe, void *args);

extern zsock_t* live_stream_client_socket_new(zconfig_t* config);
extern void live_stream_publish(zsock_t *live_stream_socket, const char* key, const char* json_str);
extern void publish_error_for_module(stream_info_t *stream_info, const char* module, const char* json_str, zsock_t* live_stream_socket);

#ifdef __cplusplus
}
#endif

#endif
