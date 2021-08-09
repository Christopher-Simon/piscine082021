/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 11:52:16 by chsimon           #+#    #+#             */
/*   Updated: 2021/08/05 11:52:19 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
		nb *= -1;
		ft_putchar('-');
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}	
	ft_putchar(nb % 10 + 48);
}

void	ft_print_thecomb(int a, int b)
{
	if (a <= 9)
	{
		ft_putchar('0');
	}
	ft_putnbr(a);
	ft_putchar(' ');
	if (b <= 9)
	{
		ft_putchar('0');
	}
	ft_putnbr(b);
	if (!(a == 98 && b == 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_thecomb(a, b);
			b++;
		}
		a++;
	}
}
