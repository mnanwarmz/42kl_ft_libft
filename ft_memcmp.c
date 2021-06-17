#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*src;
	const unsigned char	*dest;

	src = (const unsigned char *) s2;
	dest = (const unsigned char *) s1;
	i = 0;
	if (s1 != s2 || n > 0)
	{
		while (i < n)
		{
			if (src[i] != dest[i])
				return (src[i] - dest[i]);
			i++;
		}
	}
	return (0);
}
