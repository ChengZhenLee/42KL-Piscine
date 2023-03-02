/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 19:49:48 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/20 16:09:37 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	limit;
	int	iter;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	limit = nb;
	iter = 1;
	while (iter < limit)
	{
		nb *= iter;
		iter++;
	}
	return (nb);
}
