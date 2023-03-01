/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 12:47:12 by diosanto          #+#    #+#             */
/*   Updated: 2023/01/31 14:42:03 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//check for signals
int	signal_checker(char *str)
{
	int	i;

	i = 0;
	while (str)
	{
		if (str[i] == '-' && (str[i + 1] > '0' && str[i + 1] < '9'))
			return (1);
		i++;
	}
	return (0);
}

//check for digits
int	num_checker(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-')
		i++;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

//check for int max and min
int	check_int_minmax(char *str)
{
	if (ft_atoi(str) >= -2147483647 && ft_atoi(str) <= 2147483647)
		return (1);
	return (0);
}

//check for doubles by comparing the number to all the next
//ones using atoi

int	arg_checker(char *str)
{
	if (signal_checker(str))
	{
		if (num_checker(str))
		{
			if (check_int_minmax(str))
				return (1);
		}
	}
	return (0);
}
