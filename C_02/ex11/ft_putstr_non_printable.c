/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 10:57:39 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/13 21:47:11 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hex_to_char(char n)
{
	char	*hex;
	int		first;
	int		second;

	hex = "0123456789abcdef";
	write(1, "\\", 1);
	first = n / 16;
	second = n % 16;
	write(1, &hex[first], 1);
	write(1, &hex[second], 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	*temp;

	temp = str;
	while (*temp != '\0')
	{
		if (*temp >= 32)
		{
			write(1, temp, 1);
		}
		else
		{
			ft_hex_to_char(*temp);
		}
		temp++;
	}
}
