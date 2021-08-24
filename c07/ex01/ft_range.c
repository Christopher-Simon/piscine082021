/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:17:40 by chsimon           #+#    #+#             */
/*   Updated: 2021/08/23 00:58:56 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (min >= max)
		return (0);
	len = max - min;
	tab = malloc(sizeof(int) * len);
	if (!tab)
		return (0);
	while (min < max)
	{	
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
