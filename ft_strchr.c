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
	size_t	index;

	if (!s)
		return (NULL);
	index = 0;
	while (s[index])
	{
		if (s[index] == (char )c)
			return ((char *)(s + index));
		index++;
	}
	return (NULL);
}
