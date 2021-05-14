#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	int	arr[3] = {2147483647, -2147483648, 0};

	for (int i = 0; i < 3; i++)
	{
		printf("'%s'", ft_itoa(arr[i]));
	}
	printf("\n");
}
