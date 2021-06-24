#include "libmx.h"

int	mx_sqrtrd(int nb, int i) {
	int a;

	a = 1;
	while (a * a < nb - 1)
		a++;
	if (a * a == nb || (i > 0 && a * a > nb))
		return (a);
	else if (i < 0 && a * a > nb)
		return (--a);
	return (0);
}
