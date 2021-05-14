#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	unsigned char	a = ' ';
	unsigned char	b = 'a';
	unsigned char	c = '1';
	unsigned char	d = 127;
	unsigned char	e = 128;
	unsigned char	s[5] = {a, b, c, d, e};
	int				i;

	for (i = 0; i < 5; i++)
	{
		printf("%d-", isalnum(s[i]));
		printf("%d ", ft_isalnum(s[i]));
	}
	printf("\n");

	for (i = 0; i < 5; i++)
	{
		printf("%d-", isalpha(s[i]));
		printf("%d ", ft_isalpha(s[i]));
	}
	printf("\n");

	for (i = 0; i < 5; i++)
	{
		printf("%d-", isascii(s[i]));
		printf("%d ", ft_isascii(s[i]));
	}
	printf("\n");

	for (i = 0; i < 5; i++)
	{
		printf("%d-", isdigit(s[i]));
		printf("%d ", ft_isdigit(s[i]));
	}
	printf("\n");

	for (i = 0; i < 5; i++)
	{
		printf("%d-", isprint(s[i]));
		printf("%d ", ft_isprint(s[i]));
	}
	printf("\n");
}