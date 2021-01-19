/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 22:49:40 by jeson             #+#    #+#             */
/*   Updated: 2021/01/19 14:58:12 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_calloc(size_t cnt, size_t size)
{
	const size_t	total_size = cnt * size;
	void			*res;

	if (!(res = malloc(total_size)))
		return (NULL);
	ft_bzero(res, total_size);
	return (res);
}
