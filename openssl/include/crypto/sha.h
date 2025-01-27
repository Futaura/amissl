/*
 * Copyright 2018-2021 The OpenSSL Project Authors. All Rights Reserved.
 * Copyright (c) 2018, Oracle and/or its affiliates.  All rights reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#ifndef OSSL_CRYPTO_SHA_H
# define OSSL_CRYPTO_SHA_H
# if defined(__GNUC__) && (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ > 3))
# pragma once
# endif

# include <openssl/sha.h>

int sha512_224_init(SHA512_CTX *);
int sha512_256_init(SHA512_CTX *);
int ossl_sha1_ctrl(SHA_CTX *ctx, int cmd, int mslen, void *ms);
unsigned char *ossl_sha1(const unsigned char *d, size_t n, unsigned char *md);

#endif
