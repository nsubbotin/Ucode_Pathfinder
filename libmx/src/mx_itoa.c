#include "libmx.h"

static char *mx_neg(int n) {
    int i;
    int a;
    char *str;

    a = n;
    i = 1;
    while (i++ < 11 && a < -9)
        a /= 10;
    if ((str = (char *)malloc(i + 1)) == NULL)
        return (NULL);
    str[0] = '-';
    str[i] = '\0';
    while (i-- > 1) {
        str[i] = -(n % 10) + '0';
        n /= 10;
    }
    return (str);
}

char *mx_itoa(int number) {
    char *str;
    int i;
    int a;

    a = number;
    if (number < 0)
        return (mx_neg(a));
    i = 0;
    while (i++ < 10 && a > 9)
        a /= 10;
    if ((str = (char*)malloc(i + 1)) == NULL)
        return (NULL);
    str[i] = '\0';
    while (i-- > 0) {
        str[i] = number % 10 + '0';
        number /= 10;
    }
    return (str);
}

