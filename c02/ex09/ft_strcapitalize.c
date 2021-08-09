/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 18:36:08 by chsimon           #+#    #+#             */
/*   Updated: 2021/08/09 13:24:29 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphanum(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	is_alpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	i++;
	while (str[i])
	{
		if (is_alpha(str[i]) == 1)
		{
			if (is_alphanum(str[i - 1]) == 0)
				str[i] -= 32;
		}
		if ((str[i] >= 'A' && str[i] <= 'Z') && is_alphanum(str[i - 1]) == 1)
			str[i] += 32;
		i ++;
	}
	return (str);
}
