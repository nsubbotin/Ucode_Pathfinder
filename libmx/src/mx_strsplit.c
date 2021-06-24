#include "libmx.h"

static int mx_wordcount(const char *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i]) {
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static int mx_wordsize(const char *str, char c) {
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0') {
		i++;
		len++;
	}
	return (len);
}

static char	**mx_split(const char *s, char c) {
	char **mem;
	int i;
	int j;
	int k;

	i = -1;
	j = 0;
	if (!s || !c || !(mem = (char**)malloc(sizeof(char*) * (mx_wordcount(s, c) + 1))))
		return (NULL);
	while (mx_wordcount(s, c) > ++i) {
		k = 0;
		if (!(mem[i] = (char*)malloc(sizeof(char) * (mx_wordsize(&s[j], c) + 1))))
			return (NULL);
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
				mem[i][k++] = s[j++];
		mem[i][k] = '\0';
	}
	mem[i] = 0;
	return (mem);
}

char **mx_strsplit(const char *s, char c) {
	if (!s || !c)
		return (NULL);
	return (mx_split(s, c));
}
