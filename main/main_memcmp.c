#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*s1 = "Hello";
	char	*s2 = "Hello";
	char	*s3 = "World";
	char	*s4 = "";
	char	*s5 = "";

	printf("%d\n", memcmp(s1, s2, 5));
	printf("%d\n", ft_memcmp(s1, s2, 5));

	printf("%d\n", memcmp(s1, s3, 5));
	printf("%d\n", ft_memcmp(s1, s3, 5));

	printf("%d\n", memcmp(s4, s5, 0));
	printf("%d\n", ft_memcmp(s4, s5, 0));

	printf("%d\n", memcmp(s2, s4, 5));
	printf("%d\n", ft_memcmp(s2, s4, 5));

}