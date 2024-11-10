/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-10 15:50:47 by mac               #+#    #+#             */
/*   Updated: 2024-11-10 15:50:47 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node_lst;
	t_list	*ptr_node;
	t_list	*node;

	if (!lst || !f || !del)
		return (NULL);
	node_lst = NULL;
	while (lst)
	{
		node = f(lst->content);
		ptr_node = ft_lstnew(node);
		if (!ptr_node)
		{
			del(ptr_node->content);
			ft_lstclear(&node_lst, (*del));
			return (node_lst);
		}
		ft_lstadd_back(&node_lst, ptr_node);
		lst = lst->next;
	}
	return (node_lst);
}
