/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-24 13:22:55 by mac               #+#    #+#             */
/*   Updated: 2024-10-24 13:22:55 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				index;
	const unsigned char	*_s1;
	const unsigned char	*_s2;

	_s1 = (unsigned char *)s1;
	_s2 = (unsigned char *)s2;
	index = 0;
	while ((_s1[index] || _s2[index]) && (index < n))
	{
		if (_s1[index] > _s2[index])
			return (1);
		else if (_s1[index] < _s2[index])
			return (-1);
		index++;
	}
	return (0);
}
