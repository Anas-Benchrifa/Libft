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

	len_s = ft_strlen(src);
	if (dstsize != 0)
	{
		if (len_s <= dstsize - 1)
		{
			ft_memcpy(dst, src, len_s);
			dst[len_s] = '\0';
		}
		else
		{
			ft_memcpy(dst, src, (dstsize - 1));
			dst[dstsize - 1] = '\0';
		}
	}
	return (len_s);
}
