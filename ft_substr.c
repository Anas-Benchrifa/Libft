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
	size_t	_s_len;

	if (!s)
		return (NULL);
	_s_len = ft_strlen(s);
	if (start >= _s_len)
		return (ft_strdup(""));
	if (_s_len - start > len)
		sub_str = (char *)malloc((len + 1) * sizeof(char ));
	else
		sub_str = (char *)malloc((_s_len - start + 1));
	if (!sub_str)
		return (NULL);
	index = 0;
	while (s[start] && len-- > 0)
	{
		sub_str[index] = s[start];
		index++;
		start++;
	}
	sub_str[index] = '\0';
	return (sub_str);
}
