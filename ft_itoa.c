#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
		dst[i] = '\0';
	}
	return (dst);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		neg;

	neg = 0;
	i = 0;
	str = malloc(sizeof(char) * ft_intlen(n) + 1);
	if (n == -2147483648)
	{
		str = "-2147483648";
		return (str);
	}
	if (n < 0)
	{
		neg = 1;
		n *= -1;
	}
	while (n)
	{
		str[i++] = (n % 10) + '0';
		n /= 10;
	}
	if (neg)
		str[i] = '-';
	return (ft_strrev(str));
}
