#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = s;
	while (str[i] && i < n)
	{
		str[i] = '\0';
		i++;
	}
}
