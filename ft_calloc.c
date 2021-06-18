#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*new;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	new = (char *)malloc(sizeof(char) * size * nmemb);
	if (new)
		ft_bzero(new, nmemb * size);
	return (new);
}
