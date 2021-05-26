#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total;
	size_t	i;
	char	*result;

	i = 0;
	total = ft_strlen(s1) + ft_strlen(s2) + 1;
	result = malloc(sizeof(char) * total);
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		result[i + (ft_strlen(s1) + 1)] = s2[i];
		i++;
	}
	return (result);
}
