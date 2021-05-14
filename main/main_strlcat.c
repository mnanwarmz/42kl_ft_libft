#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dst[100] = "Hello ";
	char	src[6] = "World";

	printf("%lu\n", strlcat(dst, src, 100));
	printf("%s\n", dst);

	char	dst2[100] = "Hello ";
	char	src2[6] = "World";

	printf("%lu\n", ft_strlcat(dst2, src2, 100));
	printf("%s\n", dst2);
}