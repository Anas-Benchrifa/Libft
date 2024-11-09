/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-23 18:05:41 by mac               #+#    #+#             */
/*   Updated: 2024-10-23 18:05:41 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*_src;
	unsigned char	*_dst;

	_src = (unsigned char *)src;
	_dst = (unsigned char *)dst;
	if (src == NULL && dst == NULL)
		return (dst);
	while (n-- > 0)
		*_dst++ = *_src++;
	return (dst);
}
