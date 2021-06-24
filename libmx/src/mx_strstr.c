#include "libmx.h"

char *mx_strstr(const char *haystack, const char *needle) {
	int i;
	int j;
	int a;

	i = 0;
	j = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i]) {
		a = i;
		j = 0;
		while (haystack[a] == needle[j] || !needle[j]) {
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
			else if (haystack[a++] != needle[j++])
				break ;
		}
		i++;
	}
	return (0);
}
