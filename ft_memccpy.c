/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 16:22:33 by jeson             #+#    #+#             */
/*   Updated: 2021/10/11 15:26:48 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*new_dest;
	unsigned char	*new_src;
	unsigned char	find;
	size_t			i;

	new_dest = dest;
	new_src = (unsigned char *)src;
	find = c;
	i = 0;
	while (i < n)
	{
		new_dest[i] = new_src[i];
		if (new_src[i] == find)
			return (dest + (i + 1));
		i++;
	}
	return (0);
}
