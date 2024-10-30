/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-25 17:51:35 by mac               #+#    #+#             */
/*   Updated: 2024-10-25 17:51:35 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ptr_dst;
	char	*ptr_src;
	size_t	index;

	ptr_dst = (char *)dst;
	ptr_src = (char *)src;
	index = 0;
	if (dst == src)
		return (dst);
	if (ptr_dst > ptr_src)
		while (len-- > 0)
			ptr_dst[len] = ptr_src[len];
	else
	{
		while (index < len)
		{
			ptr_dst[index] = ptr_src[index];
			index++;
		}
	}
	return (dst);
}
