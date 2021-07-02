#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	size_t	s_len;
	char	*result;

	j = 0;
	if (s)
	{
		s_len = ft_strlen(s);
		if (start >= s_len)
			return (ft_strdup((char *)""));
		if (len > s_len)
			len = s_len + 1 - start;
		if (len > (s_len - start))
			len = s_len - start;
		result = malloc(sizeof(char) * (len + 1));
		if (!result)
			return (NULL);
		while (s[start] && j < len)
			result[j++] = s[start++];
		result[j] = '\0';
		return (result);
	}
	return (NULL);
}
