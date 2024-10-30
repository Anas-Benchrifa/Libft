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
	if (!dst || !src)
		return (NULL);
	while (n--)
		*(unsigned char *)dst++ = *(unsigned char *)src++;
	*(unsigned char *)dst = '\0';
	return (dst);
}
