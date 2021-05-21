#include <stdlib.h>
#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	char *new;

	new = malloc(size * nmemb);
	if (!(new))
		return (NULL);
	else
		ft_memset(new, 0, size * nmemb);
	return (new);
}
