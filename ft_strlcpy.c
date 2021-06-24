#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	if (src)
	{
		i = 0;
		src_len = ft_strlen(src);
		if (size == 0)
			return (src_len);
		while (i < size - 1 && (dest[i] || src[i]))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (src_len);
	}
	return (0);
}
