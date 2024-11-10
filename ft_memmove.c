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
	const unsigned char	*ptr_src;
	unsigned char		*ptr_dst;

	if (!dst && !src)
		return (NULL);
	ptr_dst = (unsigned char *)dst;
	ptr_src = (const unsigned char *)src;
	if (ptr_dst > ptr_src)
	{
		while (len > 0)
		{
			len--;
			ptr_dst[len] = ptr_src[len];
		}
	}
	else
		ft_memcpy(ptr_dst, ptr_src, len);
	return (dst);
}
