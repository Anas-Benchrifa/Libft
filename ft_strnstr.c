/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-24 14:59:57 by mac               #+#    #+#             */
/*   Updated: 2024-10-24 14:59:57 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i_h;
	size_t	i_n;

	if (!haystack || !needle || len == 0)
		return (NULL);
	i_h = 0;
	i_n = 0;
	while (haystack[i_h] && i_h < len)
	{
		while (haystack[i_h + i_n] == needle[i_n] && i_h < len)
		{
			if (needle[i_n] == '\0')
				return ((char *)(haystack + i_h));
			i_n++;
		}
		i_h++;
	}
	return (NULL);
}
