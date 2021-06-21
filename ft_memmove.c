#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*d;
	const char		*s;
	int				i;

	s = src;
	d = dest;
	i = 0;
	if ((d > s) && ((d - s) < (int)n))
	{
		d += n - 1;
		s += n - 1;
		while (i < n)
			d[i] = s[i++];
	}
	else if ((d < s) && (s - d < (int)n))
	{
		while (i < n)
			d[i] = s[i++];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
