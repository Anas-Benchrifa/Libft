/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-24 11:18:13 by mac               #+#    #+#             */
/*   Updated: 2024-10-24 11:18:13 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	index_s;
	size_t	len_d;
	size_t	len_s;

	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	if (dstsize <= len_d)
		return (dstsize + len_s);
	index_s = 0;
	while (src[index_s] && (len_d + index_s) < (dstsize - 1))
	{
		dst[len_d + index_s] = src[index_s];
		index_s++;
	}
	dst[len_d + index_s] = '\0';
	return (len_d + len_s);
}
