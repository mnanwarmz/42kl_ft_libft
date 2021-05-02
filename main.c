#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// This file is for testing purposes

// Function Headers
void *ft_memcpy(void *dest, const void *src, size_t len);
void *ft_memccpy(void *dest, const void *src, int c, size_t len);

// ft_memcpy
// int main()
// {
// 	char a[] = "Hello";
// 	char b[] = "Hello";
// 	char *c;
// 	char *d;

// 	c = ft_memcpy(a, "Byee", 7);
// 	d = memcpy(b, "Byee", 5);

// 	printf("ft = %s, %p\n", a, c);
// 	printf("real function = %s, %p", b, d);
// }

// ft_memccpy
int main()
{
	char a[] = "Hello";
	char b[] = "Hello";
	char *c;
	char *d;

	c = ft_memccpy(a, "Byee", 'y', 7);
	d = memccpy(b, "Byee", 'y', 7);

	printf("ft = %s\n", a);
	printf("real function = %s", b);
}