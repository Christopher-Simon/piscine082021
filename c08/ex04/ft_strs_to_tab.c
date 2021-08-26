/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 23:25:55 by chsimon           #+#    #+#             */
/*   Updated: 2021/08/25 14:33:06 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;

	i = 0;
	copy = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!copy)
		return (0);
	while (i < ft_strlen(src))
	{
		copy[i] = src [i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*the_tab;
	int			i;

	i = 0;
	the_tab = malloc(sizeof(*the_tab) * (ac + 1));
	if (!the_tab)
		return (0);
	while (i < ac)
	{
		the_tab[i].size = ft_strlen(av[i]);
		the_tab[i].str = av[i];
		the_tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	the_tab[i].str = 0;
	return (the_tab);
}
