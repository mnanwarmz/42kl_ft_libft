#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	unsigned char	l = 'l';
	unsigned char	H = 'H';
	unsigned char	p = 'p';
	char			s[6] = "Hello";

	printf("%s\n", memchr(s, l, 5));
	printf("%s\n", ft_memchr(s, l, 5));
	printf("%s\n", memchr(s, H, 5));
	printf("%s\n", ft_memchr(s, H, 5));
	printf("%s\n", memchr(s, p, 5));
	printf("%s\n", ft_memchr(s, p, 5));
}