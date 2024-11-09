/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-24 11:34:08 by mac               #+#    #+#             */
/*   Updated: 2024-10-24 11:34:08 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const unsigned char	*_s;
	unsigned char		_c;

	_s = (const unsigned char *)s;
	_c = (unsigned char )c;
	while (*_s)
	{
		if (*_s == _c)
			return ((char *)_s);
		_s++;
	}
	if (_c == '\0')
		return ((char *)_s);
	return (NULL);
}
