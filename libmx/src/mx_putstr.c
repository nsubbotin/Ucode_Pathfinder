#include "libmx.h"

void mx_putstr(char const *str) {
	if (str)
		while (*str)
			mx_printchar(*str++);
}
