/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 14:01:44 by jeson             #+#    #+#             */
/*   Updated: 2021/01/21 15:52:32 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char			**ft_malloc_error(char **res)
{
	unsigned int	i;

	i = 0;
	while (res[i])
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (NULL);
}

static unsigned int	ft_cnt_res(char const *s, char c)
{
	unsigned int	i;
	unsigned int	cnt_res;

	if (!s[0])
		return (0);
	i = 0;
	cnt_res = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			cnt_res++;
			while (s[i] && s[i] == c)
				i++;
			continue ;
		}
		i++;
	}
	if (s[i - 1] != c)
		cnt_res++;
	return (cnt_res);
}

static void			ft_get_child(char **res_child, unsigned int *child_len,
					char c)
{
	unsigned int i;

	*res_child += *child_len;
	*child_len = 0;
	i = 0;
	while (**res_child && **res_child == c)
		(*res_child)++;
	while ((*res_child)[i])
	{
		if ((*res_child)[i] == c)
			return ;
		(*child_len)++;
		i++;
	}
}

char				**ft_split(char const *s, char c)
{
	char			**res;
	char			*res_child;
	unsigned int	child_len;
	unsigned int	cnt_res;
	unsigned int	i;

	if (!s)
		return (NULL);
	cnt_res = ft_cnt_res(s, c);
	if (!(res = (char **)malloc(sizeof(char *) * (cnt_res + 1))))
		return (NULL);
	i = 0;
	res_child = (char *)s;
	child_len = 0;
	while (i < cnt_res)
	{
		ft_get_child(&res_child, &child_len, c);
		if (!(res[i] = (char *)malloc(sizeof(char) * (child_len + 1))))
			return (ft_malloc_error(res));
		ft_strlcpy(res[i], res_child, child_len + 1);
		i++;
	}
	res[i] = NULL;
	return (res);
}
