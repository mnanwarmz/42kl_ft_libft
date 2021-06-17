#include <stdlib.h>
#include "libft.h"

int	char_exists(char ch, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == ch)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*result;

	i = -1;
	while (s1[++i])
	{
		if (char_exists(s1[i], set))
			continue ;
	}
	result = malloc((sizeof(char) * i) + 1);
	i = -1;
	j = 0;
	while (s1[++i])
	{
		if (char_exists(s1[i], set))
			continue ;
		result[j] = s1[i];
		j++;
	}
	result[j] = '\0';
	return (result);
}
