/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 22:52:05 by jeson             #+#    #+#             */
/*   Updated: 2021/10/11 15:38:40 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char			*new_s1;
	unsigned int	s1_len;
	unsigned int	i;

	s1_len = ft_strlen(s1);
	new_s1 = (char *)malloc(sizeof(char) * (s1_len + 1));
	if (!new_s1)
		return (NULL);
	i = 0;
	while (i < s1_len)
	{
		new_s1[i] = s1[i];
		i++;
	}
	new_s1[i] = '\0';
	return (new_s1);
}
