#include "libft.h"

char	*ft_strrev(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(str);
	while (j > i)
	{
		j--;
		ft_swapchar(&str[i], &str[j]);
		i++;
	}
	return (str);
}
