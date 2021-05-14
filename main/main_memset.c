#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	unsigned char	c = 'c';
	char			s1[6] = "Hello";

	unsigned char	d = 'd';
	char			s2[6] = "Hello";
	memset(s1, c, 3);
	ft_memset(s2, d, 3);
	printf("%s\n", s1);
	printf("%s\n", s2);

}
