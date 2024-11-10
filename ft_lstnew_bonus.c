/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-30 15:29:16 by mac               #+#    #+#             */
/*   Updated: 2024-10-30 15:29:16 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*str_new;

	str_new = (t_list *)malloc(sizeof(t_list));
	if (!str_new)
		return (NULL);
	str_new->content = content;
	str_new->next = NULL;
	return (str_new);
}
