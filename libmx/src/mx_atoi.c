#include "libmx.h"

int mx_atoi(const char *str) {
    int res;
    int i;
    int j;

    res = 0;
    i = 1;
    j = 0;

    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
                    str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
            i++;
    if (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            i = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return ((int)(res * i));	
}
