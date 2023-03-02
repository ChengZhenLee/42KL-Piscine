/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:41:07 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/22 13:39:51 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	first;
	int	second;
	int	temp;

	first = 0;
	second = 1;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (first);
	while (index > 0)
	{
		temp = second;
		second += first;
		first = temp;
		index--;
	}
	return (first);
}
