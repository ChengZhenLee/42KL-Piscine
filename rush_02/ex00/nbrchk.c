/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbrchk.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asingh-s <asingh-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 16:39:51 by asingh-s          #+#    #+#             */
/*   Updated: 2023/02/26 17:51:06 by asingh-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "vars.h"


// char * to unsigned int *
// Revers the int

unsigned int * numconv(char *c)
{
    unsigned int *nb;
    int i;
    int j;
    int len;

    nb = (unsigned int *) malloc(30 * sizeof(unsigned int));

    j = getlenc(c);
    len = getlenc(c);
    i = -1;
	nb[j] = '\0';
	while (c[++i] >= '0' && c[i] <= '9')
		nb[--j] = c[i] - 48;
	if (getlen(nb) == len)
		return (nb);
	else
		error();
	return (0);
}

// Revers the int

void revg(int size)
{
	int	i;
	unsigned int	tmp;

	i = -1;
	while (++i < (size / 2))
	{
		tmp = g_q[i];
		g_q[i] = g_q[size - 1 - i];
		g_q[size - 1 - i] = tmp;
	}
}

// second array

void arrayinit(unsigned int *nb)
{
    int j;
    int i;
	int x;

    i = 0;
    j = -1;
    while (nb[++j] != '\0')
    {
        if (!(( i - 1 ) % 5) && nb[j] > 1)
            g_q[i] = nb[j] * 10;
        else if (!(( i - 2 ) % 5))
		{
            g_q[i] = 100;
			g_q[++i] = nb[j];
		}
        else if (!(( i - 4 ) % 5))
		{
			x = powerof(10, ((3 * (i+1) / 5)));
            g_q[i] = x;
			g_q[++i] = nb[j];
		}
        else
            g_q[i] = nb[j];
        i++;
    }
    g_q[i] = '\0';
    revg(i);
}

void logic(char *c)
{
    int i = -1;
    unsigned int *x;
    unsigned int *l = numconv(c);
    int len = getlen(g_q);
    arrayinit(l);
    while(g_q[++i])
        printf("%i\n", g_q[i]);
}