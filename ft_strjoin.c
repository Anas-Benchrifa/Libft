/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-26 10:37:41 by mac               #+#    #+#             */
/*   Updated: 2024-10-26 10:37:41 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*tmp;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	tmp = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (!tmp)
		return (NULL);
	ft_memcpy(tmp, s1, len_s1);
	ft_memcpy(tmp + len_s1, s2, len_s2);
	tmp[len_s1 + len_s2] = '\0';
	return (tmp);
}
