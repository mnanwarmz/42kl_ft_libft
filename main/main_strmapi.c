#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	capitalize_odd(unsigned int i, char c)
{
	if (i % 2 == 0)
	{
		if (c >= 'a' && c <= 'z')
		{
			c -= 32;
		}
	}
	return (c);
}

int	main(void)
{
	char	*s1 = "Hello";
	char	*res = ft_strmapi(s1, &capitalize_odd);

	for (int i = 0; i < 6; i++)
	{
		printf("%c", res[i]);
	}
	printf("\n");
	free(res);
}