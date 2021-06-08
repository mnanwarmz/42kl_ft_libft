#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long int	nb2;

	nb2 = n;
	if (nb2 < 0)
	{
		nb2 = nb2 * -1;
		ft_putchar_fd('-', fd);
	}
	if (nb2 >= 10)
		ft_putnbr_fd(nb2 / 10, fd);
	ft_putchar_fd(nb2 % 10 + 48, fd);
}
