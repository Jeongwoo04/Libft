/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 14:10:22 by jeson             #+#    #+#             */
/*   Updated: 2021/01/20 14:13:56 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lst_last;

	if (!lst || !new_node)
		return ;
	if (!*lst)
	{
		*lst = new_node;
		return ;
	}
	lst_last = ft_lstlast(*lst);
	new->next = lst_last->next;
	lst_last->next = new;
}
