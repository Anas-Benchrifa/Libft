/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-25 17:56:06 by mac               #+#    #+#             */
/*   Updated: 2024-10-25 17:56:06 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			index;

	ptr = (unsigned char *)malloc(count * size);
	if (!ptr)
		return (NULL);
	index = 0;
	while (count--)
	{
		ptr[index] = 0;
		index++;
	}
	return (ptr);
}
