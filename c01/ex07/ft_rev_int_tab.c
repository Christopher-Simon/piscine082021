/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 20:45:15 by chsimon           #+#    #+#             */
/*   Updated: 2021/08/06 11:49:44 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	a;

	i = 0;
	while (i < (size / 2))
	{
		a = tab[size -(1 + i)];
		tab[size - (1 + i)] = tab[i];
		tab[i] = a;
		i++;
	}
}
