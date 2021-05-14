#include "libft.h"
#include <stdio.h>
#include <string.h>

int		main()
{
	char	*s1 = "Do what you want cause a pirate is free, you are a pirate!";
	char	*s2 = "Do what you want cause a pirate is free, you are a pirate!";
	printf("Your function returns: %d\n", ft_strncmp(s1, s2, 58));
	printf("Proper function returns: %d\n", strncmp(s1, s2, 58));
	char	*s3 = "Do what you want cause a pirate is free, you are a pirate!";
	char	*s4 = "Do what you want cause a pirate is free, you are a pirate!";
	printf("Your function returns: %d\n", ft_strncmp(s3, s4, 60));
	printf("Proper function returns: %d\n", strncmp(s3, s4, 60));
	char	*s5 = "Do what you want cause a pirate is free, you are a pirate!";
	char	*s6 = "Do what you want cause a p\xFFrate is free, you are a pirate!";
	printf("Your function returns: %d\n", ft_strncmp(s5, s6, 58));
	printf("Proper function returns: %d\n", strncmp(s5, s6, 58));
}