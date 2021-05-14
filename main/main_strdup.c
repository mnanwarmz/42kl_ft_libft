#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
	char	*s1 = "Hello";
	char	*s2 = "World";
	char	*res1 = strdup(s1);
	char	*res2 = strdup(s2);

	for (int i = 0; i < 6; i++)
	{
		printf("%c", res1[i]);
	}
	printf("\n");
	for (int i = 0; i < 6; i++)
	{
		printf("%c", res2[i]);
	}
	printf("\n");
	free(res1);
	free(res2);
}