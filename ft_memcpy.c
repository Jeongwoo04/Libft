/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 20:36:25 by jeson             #+#    #+#             */
/*   Updated: 2021/01/19 13:28:04 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*new_dest;
	unsigned char	*new_src;

	if (!dest && !src)
		return (NULL);
	new_dest = (unsigned char *)dest;
	new_src = (unsigned char *)src;
	while (n)
	{
		*((char *)dest++) = *((char *)src++);
		n--;
	}
	return (dest);
}
