/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-26 14:16:39 by mac               #+#    #+#             */
/*   Updated: 2024-10-26 14:16:39 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	sheck_set(char const *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

char	*ft_strtrim(char const *s, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s || !set)
		return (NULL);
	start = 0;
	while (s[start] && sheck_set(set, s[start]))
		start++;
	end = ft_strlen(s) - 1;
	while (s[end] && sheck_set(set, s[end]))
		end--;
	len = end - start;
	trimmed = (char *)malloc((len + 1) * sizeof(char));
	if (!trimmed)
		return (NULL);
	ft_memcpy(trimmed, &s[start], len + 1);
	return (trimmed);
}
