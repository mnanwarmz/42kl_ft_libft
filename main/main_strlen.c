#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s1 = "Hello";
	char	*s2 = "Hell\0o";

	printf("%zu\n", strlen(s1));
	printf("%lu\n", ft_strlen(s1));
	printf("%lu\n", strlen(s2));
	printf("%lu\n", ft_strlen(s2));
}