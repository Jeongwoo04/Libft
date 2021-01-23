/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 22:49:40 by jeson             #+#    #+#             */
/*   Updated: 2021/01/23 13:05:41 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t cnt, size_t size)
{
	size_t	total_size;
	void	*res;

	total_size = cnt * size;
	if (!(res = malloc(total_size)))
		return (NULL);
	ft_memset(res, 0, total_size);
	return (res);
}
