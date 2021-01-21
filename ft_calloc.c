/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 22:49:40 by jeson             #+#    #+#             */
/*   Updated: 2021/01/21 16:20:48 by jeson            ###   ########.fr       */
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
	ft_bzero(res, total_size);
	return (res);
}
