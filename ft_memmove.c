#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*d;
	const char		*s;

	if (dest == src || n == 0)
		return (dest);
	s = src;
	d = dest;
	if ((d > s) && ((d - s) < (int)n))
	{
		d += n - 1;
		s += n - 1;
		while (n--)
			*d-- = *s--;
	}
	else if ((d < s) && (s - d < (int)n))
	{
		while (n--)
			*d++ = *s++;
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
