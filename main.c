#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// This file is for testing purposes

// ft_memcpy
int main()
{
	char a[] = "Hello";
	char b[] = "Hello";
	char *c;
	char *d;

	c = ft_memcpy(a, "Byee", 7);
	d = memcpy(b, "Byee", 5);

	printf("ft = %s, %p\n", a, c);
	printf("real function = %s, %p", b, d);
}