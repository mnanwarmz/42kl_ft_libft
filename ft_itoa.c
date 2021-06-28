#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

static char	*ft_strcpy(char *dst, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

static int	ft_intlen(unsigned long n)
{
	if (n < 0)
	{
		return (ft_intlen(-n) + 2);
	}
	if (n >= 10)
		return (ft_intlen(n / 10) + 1);
	return (1);
}

char	*ft_recursive(int n, char *str)
{
	if (n < 0)
	{
		str[0] = '-';
		str[1] = '\0';
		str = ft_strjoin(str, ft_recursive(-n, str));
	}
	else if (n >= 10)
		str = ft_strjoin(ft_recursive(n / 10, str), ft_recursive(n % 10, str));
	else if (n < 10 && n >= 0)
	{
		str[0] = n + '0';
		str[1] = '\0';
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * ft_intlen(n) + 1);
	if (!(str))
		return (NULL);
	if (n == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	str = ft_recursive(n, str);
	return (str);
}
