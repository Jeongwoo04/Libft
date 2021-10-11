/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 22:49:40 by jeson             #+#    #+#             */
/*   Updated: 2021/10/11 15:37:34 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t cnt, size_t size)
{
	size_t	total_size;
	void	*res;

	total_size = cnt * size;
	res = malloc(total_size);
	if (!res)
		return (NULL);
	ft_memset(res, 0, total_size);
	return (res);
}
