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
	size_t	h;
	size_t	n;

	h = 0;
	n = 0;
	if (*needle == 0)
		return ((char *)haystack);
	if (!haystack && len == 0)
		return (NULL);
	while (haystack[h] && h < len)
	{
		while (haystack[h + n] && haystack[h + n] == needle[n] && h + n < len)
		{
			n++;
			if (needle[n] == '\0')
				return ((char *)(haystack + h));
		}
		h++;
		n = 0;
	}
	return (NULL);
}
