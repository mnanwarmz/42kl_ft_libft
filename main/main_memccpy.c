#include "libft.h"
#include <string.h>
#include <strings.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	src[6] = "Hello\0";
	char	dst[6] = "World\0";

	char	src2[6] = "Hello\0";
	char	dst2[6] = "World\0";

	char	src3[6] = "Hello\0";
	char	dst3[6] = "World\0";

	if (argc == 2)
	{
		printf("%s\n", memccpy(dst, src, 'p', 5));
		printf("%s\n", memccpy(dst2, src2, 'e', 5));
		printf("%s\n", memccpy(dst3, src3, '\0', 5));
	}
	else
	{
		printf("%s\n", ft_memccpy(dst, src, 'p', 5));
		printf("%s\n", ft_memccpy(dst2, src2, 'e', 5));
		printf("%s\n", ft_memccpy(dst3, src3, '\0', 5));
	}
	
}