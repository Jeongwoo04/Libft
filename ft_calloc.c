/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 22:49:40 by jeson             #+#    #+#             */
/*   Updated: 2021/01/19 12:44:33 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_calloc(size_t cnt, size_t size)
{
	unsigned int	i;
	char			*dst;

	if (!(dst = malloc(sizeof(size) * cnt)))
		return (NULL);
	i = 0;
	while (i < (size * cnt))
	{
		dst[i] = 0;
		i++;
	}
	return ((void *)dst);
}
