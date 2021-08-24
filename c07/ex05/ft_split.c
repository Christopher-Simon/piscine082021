/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 14:14:32 by chsimon           #+#    #+#             */
/*   Updated: 2021/08/23 14:15:22 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_sus(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_word(char *str, char *charset)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (!(ft_is_sus(str[i], charset)))
		{
			count++;
			while (str[i] && !(ft_is_sus(str[i], charset)))
			{
				i++;
			}
		}
		if (str[i])
			i++;
	}
	return (count);
}

char	**string(char *str, char *charset, char **split_tab, int count)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (str[i])
	{
		if (!(ft_is_sus(str[i], charset)))
		{
			count++;
			len = 0;
			while (str[i] && !(ft_is_sus(str[i], charset)))
			{
				len++;
				i++;
			}
			split_tab[count - 1] = malloc(sizeof(char) * (len + 1));
			if (!str[count - 1])
				return (0);
			split_tab[count - 1][len] = '\0';
		}
		if (str[i])
			i++;
	}
	return (split_tab);
}

char	**fill_string(char *str, char *charset, char **split_tab, int count)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (str[i])
	{
		if (!(ft_is_sus(str[i], charset)))
		{
			count++;
			len = 0;
			while (str[i] && !(ft_is_sus(str[i], charset)))
			{
				split_tab[count - 1][len] = str[i];
				len++;
				i++;
			}
			split_tab[count - 1][len] = '\0';
		}
		if (str[i])
			i++;
	}
	split_tab[count] = NULL;
	return (split_tab);
}

char	**ft_split(char *str, char *charset)
{
	char	**split_tab;

	if (!str)
		return (NULL);
	split_tab = malloc(sizeof(char *) * (count_word(str, charset) + 1));
	if (!split_tab)
		return (0);
	string(str, charset, split_tab, 0);
	fill_string(str, charset, split_tab, 0);
	return (split_tab);
}
