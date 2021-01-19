/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 21:30:56 by jeson             #+#    #+#             */
/*   Updated: 2021/01/19 15:43:26 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	int				src_size;
	unsigned int	dest_size;
	unsigned int	i;

	i = 0;
	src_size = 0;
	dest_size = 0;
	while (src[src_size])
		src_size++;
	if (dstsize == 0)
		return (src_size);
	while (dest_size < dstsize && dest[dest_size])
		dest_size++;
	if (dstsize <= dest_size)
		return (dstsize + src_size);
	i = 0;
	while (dstsize && (--dstsize - dest_size) && src[i])
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (src_size + dest_size);
}
