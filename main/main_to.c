#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char test[4] = {'a', 'A', '1', '\0'};

	for (int i = 0; i < 4; i++)
		printf("%c\n", ft_tolower(test[i]));
	printf("\n");
	for (int i = 0; i < 4; i++)
		printf("%c\n", ft_toupper(test[i]));
}