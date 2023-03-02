/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 10:32:56 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/21 21:12:04 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*res;
	int	i;

	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	res = malloc(sizeof(int) * (max - min));
	if (res == NULL)
		return (-1);
	i = min;
	while (i < max)
	{
		res[i - min] = i;
		i++;
	}
	*range = res;
	return (max - min);
}
