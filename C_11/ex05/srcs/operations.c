/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 21:43:20 by chenglee          #+#    #+#             */
/*   Updated: 2023/03/02 20:28:37 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	add(int n1, int n2)
{
	int	res;

	res = n1 + n2;
	if (res < n1 && res < n2)
	{
		ft_putnbr(0);
		return ;
	}
	ft_putnbr(res);
}

void	sub(int n1, int n2)
{
	int	res;

	res = n1 - n2;
	if (res > n1 && res > n2)
	{
		ft_putnbr(0);
		return ;
	}
	ft_putnbr(res);
}

void	mult(int n1, int n2)
{
	int	res;

	res = n1 * n2;
	ft_putnbr(res);
}

void	divi(int n1, int n2)
{
	int	res;

	if (n2 == 0)
	{
		ft_putstr("Stop : division by zero");
		return ;
	}
	res = n1 / n2;
	ft_putnbr(res);
}

void	mod(int n1, int n2)
{
	int	res;

	if (n2 == 0)
	{
		ft_putstr("Stop : modulo by zero");
		return ;
	}
	res = n1 % n2;
	ft_putnbr(res);
}
