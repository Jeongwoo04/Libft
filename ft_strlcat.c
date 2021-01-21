/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 21:30:56 by jeson             #+#    #+#             */
/*   Updated: 2021/01/21 17:02:21 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	unsigned int	src_len;
	unsigned int	dest_len;
	unsigned int	i;

	i = 0;
	src_len = ft_strlen(src);
	dest_len = 0;
	if (dstsize == 0)
		return (src_len);
	while (dest_len < dstsize && dest[dest_len])
		dest_len++;
	if (dstsize <= dest_len)
		return (dstsize + src_len);
	i = 0;
	while (dstsize && (--dstsize - dest_len) && src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (src_len + dest_len);
}
