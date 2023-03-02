/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 08:37:37 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/11 20:37:08 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putint(int n)
{
	int	tens;
	int	ones;

	if (n < 10)
	{
		n = n + 48;
		write(1, "0", 1);
		write(1, &n, 1);
	}
	else
	{
		tens = (n / 10) + 48;
		ones = (n % 10) + 48;
		write(1, &tens, 1);
		write(1, &ones, 1);
	}
}

void	ft_print_comb2(void)
{
	int	left;
	int	right;

	left = 0;
	while (left <= 98)
	{
		right = left + 1;
		while (right <= 99)
		{
			ft_putint(left);
			write(1, " ", 1);
			ft_putint(right);
			if (right != 99 || left != 98)
				write(1, ", ", 2);
			right++;
		}
		left++;
	}
}
