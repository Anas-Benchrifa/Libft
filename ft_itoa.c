/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-27 11:30:00 by mac               #+#    #+#             */
/*   Updated: 2024-10-27 11:30:00 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	int_len(int n)
{
	int	len;

	len = 1;
	while (n / 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*change;
	int		sign;
	int		len;

	len = int_len(n);
	if (n < 0)
	{
		sign = -1;
		len++;
	}
	else
		sign = 1;
	change = (char *)malloc((len + 1) * sizeof(char));
	if (!change)
		return (NULL);
	while (len--)
	{
		change[len] = ((n % 10) * sign) + '0';
		n /= 10;
	}
	if (sign == -1)
		change[0] = '-';
	return (change);
}
