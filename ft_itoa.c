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

static	int	len_of_n(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*change;
	int		len;
	long	_n;

	_n = n;
	len = len_of_n(n);
	change = (char *)malloc(len + 1);
	if (!change)
		return (NULL);
	if (_n == 0)
		change[0] = '0';
	change[len] = '\0';
	if (_n < 0)
	{
		change[0] = '-';
		_n = -_n;
	}
	while (len-- && _n > 0)
	{
		change[len] = (_n % 10) + '0';
		_n /= 10;
	}
	return (change);
}
