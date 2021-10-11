/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 21:59:33 by jeson             #+#    #+#             */
/*   Updated: 2021/10/11 15:32:31 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_len;

	s_len = ft_strlen(s);
	while (s_len)
	{
		if (s[s_len] == c)
			return ((char *)&s[s_len]);
		else
			s_len--;
	}
	if (s[0] == c)
		return ((char *)&s[0]);
	else
		return (NULL);
}
