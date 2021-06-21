#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * ft_intlen(n) + 1);
	if (!(str))
		return (NULL);
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
	{
		str[0] = '-';
		str[1] = '\0';
		str = ft_strjoin(str, ft_itoa(-n));
	}
	else if (n >= 10)
		str = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	else if (n < 10 && n >= 0)
	{
		str[0] = n + '0';
		str[1] = '\0';
	}
	return (str);
}
