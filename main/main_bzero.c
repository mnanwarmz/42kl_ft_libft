#include "libft.h"
#include <strings.h>
#include <stdio.h>

int	main(void)
{
	char	s1[5] = "Hello";
	char	s2[5] = "Hello";

	bzero(s1, 3);
	ft_bzero(s2, 3);

	for (int i = 0; i < 5; i++)
	{
		printf("%c", s1[i]);
	}
	printf("\n");

	for (int j = 0; j < 5; j++)
	{
		printf("%c", s2[j]);
	}
	printf("\n");
}