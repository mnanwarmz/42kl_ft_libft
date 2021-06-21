#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	size_t		i;

	i = 0;
	s = (char *)src;
	d = (char *)dest;
	if (!src || !len)
		return (NULL);
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
