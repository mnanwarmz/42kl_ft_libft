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
	if (start > s_len)
		return ((char *)malloc(sizeof(char) * 1));
	if (len > s_len)
		return ((char *)s);
	if (len > (s_len - start))
		return ((char *)s);
	result = malloc(sizeof(char) * len + 1);
	if (!result)
		return (NULL);
	while (s[i] && j < len)
	{
		result[j] = s[i];
		i++;
		j++;
	}
	result[j] = '\0';
	return (result);
}
