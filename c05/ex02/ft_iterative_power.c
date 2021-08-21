/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 12:03:25 by chsimon           #+#    #+#             */
/*   Updated: 2021/08/18 20:07:40 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	n;
	int	i;

	i = 0;
	n = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		while (i < power)
		{
			nb = n * nb;
			i++;
		}
	}
	return (nb);
}
