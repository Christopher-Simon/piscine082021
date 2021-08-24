/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 14:11:30 by chsimon           #+#    #+#             */
/*   Updated: 2021/08/23 01:19:48 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

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
