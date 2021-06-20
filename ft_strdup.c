#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*result;
	int		i;

	result = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
