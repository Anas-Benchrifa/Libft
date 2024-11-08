/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-24 15:12:01 by mac               #+#    #+#             */
/*   Updated: 2024-10-24 15:12:01 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	result;
	int	index;
	int	sign;

	result = 0;
	index = 0;
	sign = 1;
	while (index[str] == ' ' || (str[index] >= 9 && str[index] <= 13))
		index++;
	if (str[index] == 45 || str[index] == 43)
	{
		if (str[index] == 45)
			sign *= -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		result = result * 10 + (str[index] - '0');
		index++;
	}
	return (result * sign);
}
