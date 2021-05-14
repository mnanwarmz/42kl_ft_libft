#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "libft.h"
void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ch;

	i = 0;
	ch = s;
	while (ch[i] && i < n)
	{
		ch[i] = c;
		i++;
	}
	return (s);
}
