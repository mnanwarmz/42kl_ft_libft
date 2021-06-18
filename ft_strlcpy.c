#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	if (src)
	{
		src_len = ft_strlen(src);
		if (size > 0)
		{
			if (src_len < (size - 1))
				ft_memcpy(dest, src, size - 1);
			else
			{
				ft_memcpy(dest, src, size - 1);
				dest[size - 1] = '\0';
			}
			return (src_len);
		}
	}
	return (0);
}
