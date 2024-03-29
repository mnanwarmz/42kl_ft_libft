/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:42:15 by azaid             #+#    #+#             */
/*   Updated: 2022/08/16 12:20:19 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	i;

	if (s == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	i = 0;
	while (s[i] != '\0')
		i++;
	write(1, s, sizeof(char) * i);
	return (i);
}

void	ft_putnbr(int n, int *print_length)
{
	long long int	nb2;

	nb2 = n;
	if (nb2 < 0)
	{
		nb2 = nb2 * -1;
		ft_putchar('-');
		*print_length += 1;
	}
	if (nb2 >= 10)
		ft_putnbr(nb2 / 10, print_length);
	ft_putchar(nb2 % 10 + 48);
	*print_length += 1;
}

void	ft_puthex(unsigned int n, int *print_length, const char format)
{
	long long	nb;

	nb = n;
	if (nb >= 16)
		ft_puthex(nb / 16, print_length, format);
	if (nb % 16 < 10)
		ft_putchar(nb % 16 + 48);
	else
	{
		if (format == 'x')
			ft_putchar(nb % 16 + 'a' - 10);
		else
			ft_putchar(nb % 16 + 'A' - 10);
	}
	*print_length += 1;
}

void	ft_putptr(unsigned long long n, int *print_length)
{
	if (n == 0)
	{
		ft_putchar('0');
		*print_length += 1;
		return ;
	}
	if (n >= 16)
		ft_putptr(n / 16, print_length);
	if (n % 16 < 10)
		ft_putchar(n % 16 + 48);
	else
		ft_putchar(n % 16 + 'a' - 10);
	*print_length += 1;
}
