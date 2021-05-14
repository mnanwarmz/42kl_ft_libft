#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	result;
	unsigned int	i;

	result = 0;
	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			result = s1[i] - s2[i];
			break ;
		}
		i++;
	}
	return (result);
}
