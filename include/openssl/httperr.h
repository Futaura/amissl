#if !defined(PROTO_AMISSL_H) && !defined(AMISSL_COMPILE)
#include <proto/amissl.h>
#endif
/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2021 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#ifndef OPENSSL_HTTPERR_H
# define OPENSSL_HTTPERR_H
# pragma once

# include <openssl/opensslconf.h>
# include <openssl/symhacks.h>
# include <openssl/cryptoerr_legacy.h>



/*
 * HTTP reason codes.
 */
# define HTTP_R_ASN1_LEN_EXCEEDS_MAX_RESP_LEN             108
# define HTTP_R_CONNECT_FAILURE                           100
# define HTTP_R_ERROR_PARSING_ASN1_LENGTH                 109
# define HTTP_R_ERROR_PARSING_CONTENT_LENGTH              119
# define HTTP_R_ERROR_PARSING_URL                         101
# define HTTP_R_ERROR_RECEIVING                           103
# define HTTP_R_ERROR_SENDING                             102
# define HTTP_R_FAILED_READING_DATA                       128
# define HTTP_R_HEADER_PARSE_ERROR                        126
# define HTTP_R_INCONSISTENT_CONTENT_LENGTH               120
# define HTTP_R_INVALID_PORT_NUMBER                       123
# define HTTP_R_INVALID_URL_PATH                          125
# define HTTP_R_INVALID_URL_SCHEME                        124
# define HTTP_R_MAX_RESP_LEN_EXCEEDED                     117
# define HTTP_R_MISSING_ASN1_ENCODING                     110
# define HTTP_R_MISSING_CONTENT_TYPE                      121
# define HTTP_R_MISSING_REDIRECT_LOCATION                 111
# define HTTP_R_RECEIVED_ERROR                            105
# define HTTP_R_RECEIVED_WRONG_HTTP_VERSION               106
# define HTTP_R_REDIRECTION_FROM_HTTPS_TO_HTTP            112
# define HTTP_R_REDIRECTION_NOT_ENABLED                   116
# define HTTP_R_RESPONSE_LINE_TOO_LONG                    113
# define HTTP_R_RESPONSE_PARSE_ERROR                      104
# define HTTP_R_SERVER_CANCELED_CONNECTION                127
# define HTTP_R_SOCK_NOT_SUPPORTED                        122
# define HTTP_R_STATUS_CODE_UNSUPPORTED                   114
# define HTTP_R_TLS_NOT_ENABLED                           107
# define HTTP_R_TOO_MANY_REDIRECTIONS                     115
# define HTTP_R_UNEXPECTED_CONTENT_TYPE                   118

#endif
