#include <stdlib.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!(*little) && ft_strlen(little))
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		if (big[i + j] == little[j])
		{
			while (big[i + j] == little[j] && little[j] && i+j < len)
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
