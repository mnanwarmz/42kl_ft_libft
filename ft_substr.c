#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	s_len;
	char	*result;

	i = start;
	j = 0;
	s_len = ft_strlen(s);
	if (len > s_len)
		return ((char *)s);
	if (len > (s_len - start))
		return ((char *)s);
	result = ft_calloc(len + 1, 1);
	if (!result)
		return (NULL);
	while (s[i] && j < len)
	{
		result[j] = s[i];
		i++;
		j++;
	}
	return (result);
}