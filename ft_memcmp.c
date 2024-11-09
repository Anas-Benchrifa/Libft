/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-24 14:31:10 by mac               #+#    #+#             */
/*   Updated: 2024-10-24 14:31:10 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				index;
	const unsigned char	*s_1;
	const unsigned char	*s_2;

	if (n == 0)
		return (0);
	s_1 = (const unsigned char *)s1;
	s_2 = (const unsigned char *)s2;
	index = 0;
	while (index < n)
	{
		if (s_1[index] != s_2[index])
			return (s_1[index] - s_2[index]);
		index++;
	}
	return (0);
}
