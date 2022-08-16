/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putui.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 14:10:51 by azaid             #+#    #+#             */
/*   Updated: 2022/08/16 12:21:22 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putui(unsigned int n, int *print_length)
{
	long long int	nb2;

	nb2 = n;
	if (nb2 >= 10)
		ft_putui(nb2 / 10, print_length);
	ft_putchar(nb2 % 10 + 48);
	*print_length += 1;
}
