#include "libmx.h"

char *mx_strncat(char *s1, const char *s2, size_t n) {
	size_t p;
	size_t l;
	size_t i;

	i = 0;
	p = mx_strlen(s1);
	l = mx_strlen(s2);
	while (i < n && i < l) {
		s1[i + p] = s2[i];
		i++;
	}
	s1[i + p] = '\0';
	return (s1);
}
