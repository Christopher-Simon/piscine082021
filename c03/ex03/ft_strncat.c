/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 18:05:31 by chsimon           #+#    #+#             */
/*   Updated: 2021/08/10 16:32:22 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*org;
	unsigned int	i;

	org = dest;
	i = 0;
	while (*dest)
		dest++;
	while (i < nb && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (org);
}
