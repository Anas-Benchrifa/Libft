/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-26 09:25:40 by mac               #+#    #+#             */
/*   Updated: 2024-10-26 09:25:40 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	index;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s) + 1;
	if (start >= s_len)
		return ((char *)malloc(1));
	if (len > s_len - start)
		len = s_len - start;
	sub_str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!sub_str)
		return (NULL);
	index = 0;
	while (index < len)
	{
		sub_str[index] = s[start];
		index++;
		start++;
	}
	sub_str[index] = '\0';
	return (sub_str);
}
