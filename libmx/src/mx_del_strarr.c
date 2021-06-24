#include "libmx.h"

void mx_del_strarr(char ***arr) {
    char **end = NULL;

    if (arr) {
        end = *arr;
        while (*end) {
            mx_strdel(end);
            end++;
        }
        free(*arr);
        *arr = NULL;
    }
}
