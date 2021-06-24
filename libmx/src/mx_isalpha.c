#include "libmx.h"

int mx_isalpha(int c) {
	if ((c <= 'Z' && c >= 'A') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
