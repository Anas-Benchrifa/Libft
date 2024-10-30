/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-23 17:51:04 by mac               #+#    #+#             */
/*   Updated: 2024-10-23 17:51:04 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*result;
	size_t			index;

	if (!b)
		return (NULL);
	index = 0;
	result = (unsigned char *)b;
	while (len--)
	{
		result[index] = (unsigned char )c;
		index++;
	}
	return (b);
}
