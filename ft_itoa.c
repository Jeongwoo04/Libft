/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 14:02:56 by jeson             #+#    #+#             */
/*   Updated: 2021/01/19 12:27:17 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	ft_abs(long int nbr)
{
	return ((nbr < 0) ? -nbr : nbr);
}

int			ft_len(long int nbr)
{
	int		len;

	len = (nbr <= 0) ? 1 : 0;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*c;

	sign = (n < 0) ? -1 : 1;
	len = ft_len(n);
	c = (char *)malloc(sizeof(char) * (len + 1));
	if (c == NULL)
		return (0);
	c[len] = '\0';
	while (--len >= 0)
	{
		c[len] = '0' + ft_abs(n % 10);
		n = ft_abs(n / 10);
	}
	if (sign == -1)
		c[0] = '-';
	return (c);
}
