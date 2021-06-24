#include "libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {
    unsigned char *str;

    if (s) { 
        str = (unsigned char *)s + mx_strlen(s);
        for (size_t i = 0; i < n; i++)
            if (*str-- == c)
                return ++str;
    }
    return NULL;
}
