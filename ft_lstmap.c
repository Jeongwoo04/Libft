/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 14:48:29 by jeson             #+#    #+#             */
/*   Updated: 2021/10/11 15:28:31 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*tmplst;
	void	*tmp;

	if (!lst || !f)
		return (NULL);
	tmp = (*f)(lst->content);
	tmplst = ft_lstnew(tmp);
	if (!tmplst)
		return (NULL);
	newlst = tmplst;
	lst = lst->next;
	while (lst)
	{
		tmp = (*f)(lst->content);
		tmplst->next = ft_lstnew(tmp);
		if (!tmplst->next)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		tmplst = tmplst->next;
		lst = lst->next;
	}
	return (newlst);
}
