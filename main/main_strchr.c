#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*s1 = "Hello";

	printf("%p\n", (void *)s1);
	printf("%p\n", (void *)(strchr(s1, 'l')));
	printf("%p\n", (void *)(ft_strchr(s1, 'l')));
	printf("%p\n", (void *)(strchr(s1, '\0')));
	printf("%p\n", (void *)(ft_strchr(s1, '\0')));
}