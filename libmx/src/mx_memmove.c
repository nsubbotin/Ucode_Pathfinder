#include "libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len) {
    unsigned char *ds = (unsigned char *)dst;
    unsigned char *sr = (unsigned char *)src;

    if (ds < sr)
        mx_memcpy(ds, sr, len);
    else
        while (len-- > 0)
            ds[len] = sr[len];
    return (dst);
}
