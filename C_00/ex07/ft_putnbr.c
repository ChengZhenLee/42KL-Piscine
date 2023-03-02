/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 20:31:15 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/13 17:18:48 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putint(int n)
{
	n = n + 48;
	write(1, &n, 1);
}

void	ft_putnbr(int nb)
{
	int	temp;

	temp = nb;
	if (temp == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{	
		temp = nb * -1;
	}
	if (temp < 10 && temp >= 0)
	{
		if (nb < 0)
			ft_putchar('-');
		ft_putint(temp);
		return ;
	}
	else
	{
		ft_putnbr((temp / 10));
		ft_putint((temp % 10));
	}
}
