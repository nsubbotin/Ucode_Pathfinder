#include "libmx.h"

static int del(unsigned long num) {
    int length = 0;
    while (num) {
        num /= 16;
        length++;
    }
    return length;
}

char *mx_nbr_to_hex(unsigned long nbr) {
    char *number = NULL;
    unsigned long num = nbr;
    int length = del(nbr);
    int temp;

    number = mx_strnew(length);
    if (nbr == 0)
        return 0;
    while (num) {
        temp = num % 16;
        if (temp < 10)
            number[--length] = 48 + temp;
        if (temp >= 10)
            number[--length] = 87 + temp;
        num /= 16;
    }
    return number;
}
