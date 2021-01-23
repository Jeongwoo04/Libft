/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 14:21:19 by jeson             #+#    #+#             */
/*   Updated: 2021/01/23 12:49:27 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp1;
	t_list	*tmp2;

	if (!lst || !*lst || !del)
		return ;
	tmp1 = *lst;
	tmp2 = tmp1;
	while (tmp1)
	{
		tmp2 = tmp1->next;
		(*del)((void *)tmp1->content);
		free(tmp1);
		tmp1 = tmp2;
	}
	*lst = NULL;
}
