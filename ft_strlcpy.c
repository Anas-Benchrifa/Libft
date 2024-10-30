/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-23 17:51:45 by mac               #+#    #+#             */
/*   Updated: 2024-10-23 17:51:45 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len_s;
	size_t	index;

	len_s = ft_strlen(src);
	index = 0;
	if ((len_s + 1) >= dstsize)
	{
		while (dstsize--)
		{
			dst[index] = src[index];
			index++;
		}
		dst[index] = '\0';
	}
	else
		ft_memcpy(dst, src, dstsize);
	return (len_s);
}
