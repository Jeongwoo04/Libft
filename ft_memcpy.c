/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 20:36:25 by jeson             #+#    #+#             */
/*   Updated: 2021/01/19 12:56:41 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*origin_dst;

	if (!dst && !src)
		return (NULL);
	origin_dst = dst;
	while (n--)
		*((char *)dst++) = *((char *)src++);
	return (origin_dst);
}
