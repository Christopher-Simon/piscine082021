/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 12:12:21 by chsimon           #+#    #+#             */
/*   Updated: 2021/08/15 20:28:12 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c )
{
	write(1, &c, 1);
}

void	ascii_converter(int nb)
{
	int	div;
	int	mod;

	div = nb / 10;
	mod = nb % 10;
	if (div != 0)
		ascii_converter(div);
	ft_putchar(mod + 48);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	ascii_converter(nb);
}
