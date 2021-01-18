/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 22:08:59 by jeson             #+#    #+#             */
/*   Updated: 2021/01/05 22:25:47 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *all, const char *part, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	if (part[0] == '\0')
		return ((char *)all);
	i = 0;
	while (all[i] && i < len)
	{
		j = 0;
		if (all[i] == part[j])
		{
			while (i + j < len && all[i + j] == part[j])
			{
				j++;
				if (!part[j])
					return ((char *)&all[i]);
			}
		}
		i++;
	}
	return (0);
}
