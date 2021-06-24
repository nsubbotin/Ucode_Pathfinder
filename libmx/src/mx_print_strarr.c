#include "libmx.h"

void mx_print_strarr(char **arr, const char *delim) {
    if (!arr || !delim) {
        return;
    }
    while (*arr) {
        mx_printstr(*arr++);

        if (*arr) {
            mx_printstr(delim);
        }
    }
    mx_printstr("\n");
}
