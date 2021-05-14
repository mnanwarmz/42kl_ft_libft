#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*src;
	unsigned char	*dest;
	int				result;

	src = (unsigned char*)s2;
	dest = (unsigned char*)s1;
	i = 0;
	result = 0;
	while (i < n)
	{
		if (src[i] != dest[i])
		{
			if ((src[i] - dest[i]) < 0)
				result = -1;
			else
				result = 1;
		}
		i++;
	}
	return (result);
}
