/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 11:15:55 by chsimon           #+#    #+#             */
/*   Updated: 2021/08/18 19:16:41 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_puttab(int *tab, int i)
{
	char	c;

	while (i < 10)
	{
		c = tab[i] + '0';
		i++;
		write(1, &c, 1);
	}
	write(1, "\n", 1);
}

int	check(int *tab, int x, int y, int i)
{
	if (x == 0)
		return (1);
	while ((++i <= y) && ((x - i) >= 0))
		if (tab[x - i] == y - i)
			return (0);
	i = 0;
	while ((++i <= (9 - y)) && ((x - i) >= 0 ))
		if (tab[x - i] == y + i)
			return (0);
	while (--x >= 0)
		if (tab[x] == y)
			return (0);
	return (1);
}

int	ft_backtrack(int *tab, int x, int *count)
{
	int	y;

	y = 0;
	if (x == 10)
	{
		ft_puttab(tab, 0);
		(*count)++;
		return (0);
	}
	tab[x] = y;
	while (y < 10)
	{
		tab[x] = y;
		if (check(tab, x, y, 0))
			ft_backtrack(tab, x + 1, count);
		y++;
	}
	return (0);
}

int	ft_ten_queens_puzzle(void)
{
	int	tab[10];
	int	i;

	i = 0;
	ft_backtrack(tab, 0, &i);
	return (i);
}
