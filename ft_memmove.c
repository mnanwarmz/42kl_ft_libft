#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*d;
	const char		*s;
	unsigned char	*tmp;

	s = src;
	d = dest;
	tmp = malloc(sizeof(char) * n);
	if (tmp == NULL)
		return (NULL);
	ft_memcpy(tmp, s, n);
	ft_memcpy(d, tmp, n);
	free(tmp);
	return (dest);
}
