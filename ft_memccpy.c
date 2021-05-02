#include <stdlib.h>

void *ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	char *d;
	const char *s;
	size_t i;

	i = 0;
	s = src;
	d = dest;
	while (i < len && d[i - 1] != c && s[i - 1] != c)
	{
		d[i] = s[i];
		i++;
	}
	return &d[i];
}
