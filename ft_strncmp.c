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
	size_t	index;

	index = 0;
	while (s1[index] && s2[index] && --n)
	{
		if (s1[index] != s2[index])
			return ((unsigned char)s1[index] - (unsigned char )s2[index]);
		index++;
	}
	return ((unsigned char)s1[index] - (unsigned char )s2[index]);
}
