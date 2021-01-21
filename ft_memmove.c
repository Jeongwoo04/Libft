/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 20:39:22 by jeson             #+#    #+#             */
/*   Updated: 2021/01/21 16:53:58 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *new_dest;
	unsigned char *new_src;

	if (dest == src || !n)
		return (dest);
	new_dest = (unsigned char *)dest;
	new_src = (unsigned char *)src;
	if (dest < src)
	{
		while (n--)
			*new_dest++ = *new_src++;
	}
	else
	{
		while (n--)
			*(new_dest + n) = *(new_src + n);
	}
	return (dest);
}
