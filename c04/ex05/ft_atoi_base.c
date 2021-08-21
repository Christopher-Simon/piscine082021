/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 20:20:55 by chsimon           #+#    #+#             */
/*   Updated: 2021/08/15 20:33:27 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_base(char *base)
{
	int	a;
	int	i;

	i = 0;
	while (base[i])
	{
		a = i;
		if (base[i] == '+' || base[i] == '-' || base[i] == '\t'
			|| base[i] == '\n' || base[i] == '\r'
			|| base[i] == '\v' || base[i] == ' ' || base[i] == '\f')
		{
			return (0);
		}
		while (*(base + ++a))
		{
			if (base[i] == base[a])
			{
				return (0);
			}
		}
		i++;
	}
	if (i == 0 || i == 1)
		return (0);
	return (1);
}

int	check_pos(char *base, char c )
{
	int	p;

	p = 0;
	while (c != base [p])
		p++;
	return (p);
}

int	debasulator(char *base, char *str)
{
	int	a;
	int	i;
	int	c;
	int	b;

	i = 0;
	c = 0;
	a = 0;
	while (base[i])
		i++;
	while (str[c])
	{
		b = 0;
		while (base[b])
		{
			if (base[b] == str[c])
				break ;
			b++;
		}
		if (b == i)
			return (a);
		a = i * a + (check_pos(base, str[c]));
		c++;
	}
	return (a);
}

int	ft_atoi_base(char *str, char *base)
{
	int	a;
	int	i;
	int	d;

	d = 0;
	i = 0;
	a = 0;
	while (*str == '\t' || *str == '\n' || *str == '\r'
		|| *str == '\v' || *str == ' ' || *str == '\f')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			i++;
		str++;
	}
	if (check_base(base) == 0)
		return (0);
	a = debasulator(base, str);
	if (i % 2 != 0)
		a *= -1;
	return (a);
}
