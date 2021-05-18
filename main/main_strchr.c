#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*s1 = "Hello";

	printf("%p\n",s1);
	printf("%p\n",(strchr(s1, 'l')));
	printf("%p\n",(ft_strchr(s1, 'l')));
	printf("%p\n",(strchr(s1, '\0')));
	printf("%p\n",(ft_strchr(s1, '\0')));
}