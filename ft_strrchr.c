/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-24 11:41:51 by mac               #+#    #+#             */
/*   Updated: 2024-10-24 11:41:51 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t				len;
	const unsigned char	*_s;
	unsigned char		_c;

	_s = (const unsigned char *)s;
	_c = (unsigned char )c;
	len = ft_strlen(s);
	while (len--)
	{
		if (_s[len] == _c)
			return ((char *)_s + len);
	}
	if (_c == '\0')
		return ((char *)_s + ft_strlen(s));
	return (NULL);
}
