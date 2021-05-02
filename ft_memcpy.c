#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t len)
{
	char *d;
	const char *s;
	size_t i;

	i = 0;
	s = src;
	d = dest;
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return dest;
}

int main()
{
	char a[] = "Hello";
	char b[] = "Hello";
	char *c;
	char *d;

	c = ft_memcpy(a, "Byee", 7);
	d = memcpy(b, "Byee", 5);

	printf("ft = %s, %p\n", a, c);
	printf("ft = %s, %p", b, d);
}