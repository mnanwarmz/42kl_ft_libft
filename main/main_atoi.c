#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	char	*intmax = "2147483647";
	char	*intmin = "-2147483648";
	char	*negs = "--100";
	char	*pos = "++100";
	char	*space = "   100";
	char	*spaceneg = "   -100";
	char	*zero = "0";

	printf("%d\n", atoi(intmax));
	printf("%d\n", ft_atoi(intmax));
	printf("%d\n", atoi(intmin));
	printf("%d\n", ft_atoi(intmin));
	printf("%d\n", atoi(negs));
	printf("%d\n", ft_atoi(negs));
	printf("%d\n", atoi(pos));
	printf("%d\n", ft_atoi(pos));
	printf("%d\n", atoi(space));
	printf("%d\n", ft_atoi(space));
	printf("%d\n", atoi(spaceneg));
	printf("%d\n", ft_atoi(spaceneg));
	printf("%d\n", atoi(zero));
	printf("%d\n", ft_atoi(zero));
}
