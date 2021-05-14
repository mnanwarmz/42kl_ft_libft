#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*s1 = "Hello world, this is a test string";
	char	**res = ft_split(s1, ' ');

	for (int i = 0; i < 8; i++)
	{
		printf("%s\n", res[i]);
	}
}