/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:57:45 by jeson             #+#    #+#             */
/*   Updated: 2021/01/19 15:41:16 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	unsigned int	s1_len;
	unsigned int	s2_len;
	unsigned int	i;
	unsigned int	j;
	char			*res;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	i = 0;
	j = -1;
	if (!(res = malloc(sizeof(char) * (s1_len + s2_len + 1))))
		return (NULL);
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	while (s2[++j])
		res[i++] = s2[j];
	res[i] = '\0';
		return (res);
}
