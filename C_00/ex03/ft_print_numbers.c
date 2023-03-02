/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:58:45 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/09 20:06:26 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	count;
	int	c;

	count = 0;
	while (count < 10)
	{	
		c = count + 48;
		write(1, &c, 1);
		count++;
	}
}
