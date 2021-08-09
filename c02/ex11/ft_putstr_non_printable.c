/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 22:49:44 by chsimon           #+#    #+#             */
/*   Updated: 2021/08/09 13:46:24 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_hex_converter(int a, char *base)
{
	int	div;
	int	mod;

	div = a / 16;
	mod = a % 16;
	if (div != 0)
		ft_hex_converter(div, base);
	write(1, &base[mod], 1);
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, "\\", 1);
			if (str[i] >= 0 && str[i] < 16)
				write(1, "0", 1);
			ft_hex_converter((unsigned char)str[i], "0123456789abcdef");
		}
		else
			write(1, str + i, 1);
		i++;
	}	
}
