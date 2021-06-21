#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	i = 0;
	if (dest || src)
	{
		s = (unsigned char *)src;
		d = (unsigned char *)dest;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
		return (dest);
	}
	return (NULL);
}
