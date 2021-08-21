/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 18:36:08 by chsimon           #+#    #+#             */
/*   Updated: 2021/08/10 11:56:36 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	alphanum(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

void	flag_behaviour(int flag, char *ptr)
{
	while (*ptr)
	{
		if (flag == 1)
		{
			if (*ptr >= 'A' && *ptr <= 'Z')
				*ptr += 32;
			if (alphanum(*ptr) == 0)
				flag--;
		}
		if (flag == 0)
		{
			if (*(ptr) >= 'a' && 'z' >= (*ptr))
				*ptr -= 32;
			if (alphanum(*ptr) == 1)
				flag++;
		}
		ptr++;
	}
}

char	*ft_strcapitalize(char *str)
{
	char	*ptr;
	int		flag;

	ptr = str;
	if (alphanum(*ptr) == 1)
	{
		flag = 1;
		if ((*(ptr) >= 'a') && (*(ptr) <= 'z'))
			*ptr -= 32;
	}
	else
		flag = 0;
	ptr++;
	flag_behaviour(flag, ptr);
	return (str);
}
