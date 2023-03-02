/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:59:27 by chenglee          #+#    #+#             */
/*   Updated: 2023/03/02 18:03:56 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

/*int	hexchar_to_dec(char *lcol)
{
	int		i;
	int		res;
	char	*hex;
	int		j;

	i = 7;
	res = 0;
	hex = "0123456789abcdef";
	while (i >= 0)
	{
		j = 0;
		while (j < 16)
		{
			if (hex[j] == lcol[i])
				res = res * 16 + j;
			j++;
		}
		i--;
	}
	return (res);
}*/

// converts integer in decimals to a string of hex characters and print
// them out
void	intdec_to_hex(int num, int flag)
{
	int		i;
	char	res[8];
	char	*hex;

	i = 7;
	if (flag)
		i = 6;
	hex = "0123456789abcdef";
	while (i >= 0)
	{
		res[i] = hex[num % 16];
		num = num / 16;
		i--;
	}
	ft_putstr(res);
}
