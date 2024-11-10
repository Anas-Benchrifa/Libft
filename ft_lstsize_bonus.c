/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-01 18:00:32 by mac               #+#    #+#             */
/*   Updated: 2024-11-01 18:00:32 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		node_len;
	t_list	*ptr;

	ptr = lst;
	node_len = 0;
	while (ptr != NULL)
	{
		node_len++;
		ptr = ptr->next;
	}
	return (node_len);
}
