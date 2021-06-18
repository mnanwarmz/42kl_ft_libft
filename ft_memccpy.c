#include <stdlib.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	unsigned char		*d;
	unsigned char		*s;
	size_t				i;

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	while (i < len)
	{
		d[i] = s[i];
		if (d[i] == (unsigned char)c)
			return (&d[i] + 1);
		i++;
	}
	return (NULL);
}
