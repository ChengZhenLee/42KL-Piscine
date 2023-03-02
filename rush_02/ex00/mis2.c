/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mis2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asingh-s <asingh-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 20:59:54 by asingh-s          #+#    #+#             */
/*   Updated: 2023/02/26 17:35:40 by asingh-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vars.h"

//random shit

void error(void)
{
    char *e;

    e = "Error\n";
    ft_putstring(e);
}

int	getlen(unsigned int	*num)
{
	int	len;

	len = 0;
	while (num[len])
		len++;
	return (len);
}

int	getlenc(char *c)
{
	int	len;

	len = 0;
	while (c[len])
		len++;
	return (len);
}

int	powerof(int nb, int power)
{
	int	i;
	int	n;

	i = 1;
	n = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (++i <= power)
		nb *= n;
	return (nb);
}