/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 20:39:22 by jeson             #+#    #+#             */
/*   Updated: 2021/01/19 13:45:37 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*new_dest;
	unsigned char	*new_src;
	unsigned int	i;

	if (!dest && !src)
		return (NULL);
	if (dest == src || n == 0)
		return (dest);
	if (dest <= src)
	{
		new_dest = (unsigned char *)dest;
		new_src = (unsigned char *)src;
		while (n--)
			*new_dest++ = *new_src++;
	}
	else
	{
		new_dest = (unsigned char *)dest + n;
		new_src = (unsigned char *)src + n;
		while (n--)
			*--new_dest = *--new_src;
	}
	return (dest);
}
