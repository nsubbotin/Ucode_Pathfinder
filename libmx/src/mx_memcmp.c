#include "libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n) {
    unsigned char *c_dst = (unsigned char *)s1;
    unsigned char *c_src = (unsigned char *)s2;

    while (n-- > 0)
        if (*c_dst++ != *c_src++)
            return (*--c_dst - *--c_src);
    return (0);
}

