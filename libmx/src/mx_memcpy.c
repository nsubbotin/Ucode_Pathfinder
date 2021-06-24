#include "libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n) {
    char *str1 = (char *)dst;
    char *str2 = (char *)src;

    while (n-- > 0)
        *str1++ = *str2++;
    return (dst);
}
