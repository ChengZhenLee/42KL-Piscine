/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mis1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asingh-s <asingh-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 20:59:54 by asingh-s          #+#    #+#             */
/*   Updated: 2023/02/26 17:49:00 by asingh-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vars.h"
#include <unistd.h>


//random shit

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_putstring(char *str)
{
	int i;

	i = -1;
	while(str[++i])
		ft_putchar(str[i]);
}

int	numcheck(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
	}
	logic(str);
	return(0);
}
