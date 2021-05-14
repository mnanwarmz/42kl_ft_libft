#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*s1 = "Hello, World";
	char	*res = ft_substr(s1, 7, 4);

	for (int i = 0; i < 5; i++)
		printf("%c", res[i]);
	printf("\n");
	free(res);
}