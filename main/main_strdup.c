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
	char	*res3 = ft_strdup(s1);
	char	*res4 = ft_strdup(s2);

		printf("%s\n", res1);
		printf("%s\n", res3);
		printf("%s\n", res2);
		printf("%s\n", res4);
	free(res1);
	free(res2);
	free(res3);
	free(res4);
}