/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:51:57 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/13 17:39:36 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	getmax(int size)
{
	int	max;
	int	count;
	int	multi;

	multi = 10;
	count = 1;
	max = 9;
	while (count < size)
	{
		max = max + (9 - count) * multi;
		multi = multi * 10;
		count++;
	}
	return (max);
}

void	ft_putint(int data, int max)
{
	char	out;

	if (data == 0 && max != 0)
	{
		write(1, "0", 1);
	}
	else if (data != 0)
	{	
		max = max / 10;
		ft_putint((data / 10), max);
		out = (data % 10) + 48;
		write(1, &out, 1);
	}
}

void	printnums(int num, int size, int data, int max)
{
	int	limit;
	int	count;
	int	rec;

	count = num;
	limit = 10 - size;
	while (size != 0 && count <= limit)
	{	
		rec = (data * 10) + count;
		printnums((num + 1), (size - 1), rec, max);
		count++;
		num++;
	}
	if (size == 0)
	{
		ft_putint(data, max);
		if (data != max)
			write(1, ", ", 2);
		return ;
	}
}

void	ft_print_combn(int n)
{
	int	max;

	max = getmax(n);
	printnums(0, n, 0, max);
}
