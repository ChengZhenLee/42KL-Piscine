/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:39:43 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/16 17:18:03 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	neg;
	int	counter;
	int	res;

	res = 0;
	neg = 0;
	counter = 0;
	while (str[counter] == '-' || str[counter] == '+' || str[counter] == ' ')
	{
		if (str[counter] == '-')
			neg++;
		counter++;
	}
	while (str[counter] >= '0' && str[counter] <= '9')
	{
		if (neg % 2 == 0)
			res = res * 10 + (str[counter] - 48);
		else
			res = res * 10 - (str[counter] - 48);
		counter++;
	}
	return (res);
}
