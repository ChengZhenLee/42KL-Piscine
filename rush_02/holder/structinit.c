/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structinit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asingh-s <asingh-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 20:58:41 by asingh-s          #+#    #+#             */
/*   Updated: 2023/02/26 18:47:24 by asingh-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vars.h"
#include <stdio.h>
#include <stdlib.h>

unsigned int **g_ans;

//Determine number of elements in an int array

int	getlen(unsigned int	*num)
{
	int	len;

	len = 0;
	while (num[len])
		len++;
	return (len);
}

//Set up the struct

void instruct(unsigned int numarr[32], char wordarr[32][15])
{
	int i;
	int j;

	i = -1;
	while (++i < 32)
	{
		g_res[i].num = numarr[i];
		while(g_res[i].word[++j])
            g_res[i].word[j] = wordarr[i][j];
	}
}

//The find fuction

char *findword (unsigned int num)
{
	int	i;

	i = -1;
	while (++i < 32)
	{
		if (g_res[i].num == num)
			return (g_res[i].word);
	}
	return (0);
}

//Returns an array of word (char[15])

void findall(unsigned int	*num)
{
	int		i;

	i = -1;
	while (num[++i])
	{
		if (num[i] == 10)
			g_ans[i] = ft_strcpy(g_ans[i], findword(num[i] + num[i+1]));
		else
			g_ans[i] = ft_strcpy(g_ans[i], findword(num[i]));
	}
}
/*
int main(void)
{
	int *numarr;
	char wordarr[32][15];

	numarr = malloc(5 * sizeof(int));

	for (int i = 0; i < 5; i++)
		numarr[i] = 1;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			wordarr[i][j] = 'h';
	}
	instruct(numarr, wordarr);
	for (int i = 0; i < 5; i++)
	{
		printf("%i", g_res[i].num);
		printf("%s", g_res[i].word);
	}
}
*/