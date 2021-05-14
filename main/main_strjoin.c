#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*s1 = "Hello ";
	char	*s2 = "World";
	char	*res = ft_strjoin(s1, s2);

	for (int i = 0; i < 12; i++)
	{
		printf("%c", res[i]);
	}
	printf("\n");
	free(res);
}