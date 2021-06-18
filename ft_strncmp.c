#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	result;
	unsigned int	i;

	result = 0;
	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
		{
			result = (unsigned char )s1[i] - (unsigned char )s2[i];
			break ;
		}
		if (s1[i] == '\0' || s2[i] == '\0')
			break ;
		i++;
	}
	return (result);
}
