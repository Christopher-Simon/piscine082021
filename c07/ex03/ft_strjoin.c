/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:55:43 by chsimon           #+#    #+#             */
/*   Updated: 2021/08/23 17:04:53 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	ft_strcat(char *dest, char *src)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (dest[l])
		l++;
	while (src[i])
	{
		dest[l + i] = src[i];
		i++;
	}
	dest[l + i] = '\0';
	return (*dest);
}

int	lenght_of_str(int size, char **strs, char *sep)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	while (i < size - 1)
	{
		len += ft_strlen(strs[i]);
		len += ft_strlen(sep);
		i++;
	}
	len += ft_strlen(strs[i]);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		len;

	if (size < 1)
		len = 0;
	else
		len = lenght_of_str(size, strs, sep);
	str = malloc(sizeof(*str) * (len + 1));
	if (!str)
		return (0);
	str[0] = '\0';
	if (size < 1)
		return (str);
	i = 0;
	while (i < size - 1)
	{
		ft_strcat(str, strs[i]);
		ft_strcat(str, sep);
		i++;
	}
	ft_strcat(str, strs[i]);
	return (str);
}
