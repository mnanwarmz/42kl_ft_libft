#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	src[6] = "Hello";
	char	dst[6] = "World";

	char	src2[6] = "Hello";
	char	dst2[6] = "World";

	char	src3[6] = "Hello";
	char	dst3[6] = "World";

	char	src4[6] = "Hello";
	char	dst4[6] = "World";

	char	src5[6] = "Hello";
	char	*dst5 = &src5[1];

	char	src6[6] = "Hello";
	char	*dst6 = &src6[1];


	printf("%p\n", memmove(dst, src, 6));
	printf("%p\n", ft_memmove(dst2, src2, 6));

	printf("%p\n", memmove(dst3, src3, 2));
	printf("%p\n", ft_memmove(dst4, src4, 2));

	printf("%p\n", memmove(dst5, src5, 4));
	printf("%p\n", ft_memmove(dst6, src6, 4));
}