/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 10:05:17 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/17 11:57:38 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*new;
	int	i;

	if (min >= max)
		return (0);
	new = malloc((max - min) * 4);
	i = min;
	while (i < max)
	{
		new[i - min] = i;
		i++;
	}
	return (new);
}
