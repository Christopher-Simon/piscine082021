/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 16:15:37 by chsimon           #+#    #+#             */
/*   Updated: 2021/08/22 19:33:21 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	d;
	int	r;

	r = 1;
	d = 2;
	if (nb <= 1)
		return (2);
	while (r != 0 && d <= nb / d)
	{
		r = nb % d;
		d++;
	}
	if (r != 0)
		return (1);
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}
