#include <stdlib.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char *d;
	const char *s;
	size_t i;

	i = 0;
	s = src;
	d = dest;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return dest;
}
