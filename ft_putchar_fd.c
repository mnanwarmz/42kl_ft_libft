#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	int f;

	f = fd;
	write(f, &c, 1);
}
