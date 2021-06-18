#include <stdlib.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	i = 0;
	if (!(*little))
		return ((char *)big);
	little_len = ft_strlen(little);
	while (i < len && big[i] && little_len <= len)
	{
		j = 0;
		if (big[i + j] == little[j])
		{
			while (big[i + j] == little[j] && little[j] && i + j < len)
			{
				if (little[j + 1] == '\0')
					return ((char *)big + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
