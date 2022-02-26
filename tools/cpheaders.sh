#!/bin/sh
BUILD_D=$1
rm -f include/openssl/*
for header in ${BUILD_D}/openssl/include/openssl/*.h openssl/include/openssl/*.h; do
  file=$(basename ${header})
  if echo "${file}" | grep -qv "__"; then
    cp -a ${header} include/openssl/
    sed -i '1s/^/#if !defined(PROTO_AMISSL_H) \&\& !defined(AMISSL_COMPILE)\n#include <proto\/amissl.h>\n#endif\n/' include/openssl/${file}
    sed -i 's/\#\s*pragma once/# if defined(__GNUC__) \&\& (__GNUC__ > 3 || (__GNUC__ == 3 \&\& __GNUC_MINOR__ > 3))\n&\n# endif/' include/openssl/${file}
    echo "copied+patched ${header} to include/openssl"
  fi
done
