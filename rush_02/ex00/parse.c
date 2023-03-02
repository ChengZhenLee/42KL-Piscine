/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asingh-s <asingh-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:40:02 by asingh-s          #+#    #+#             */
/*   Updated: 2023/02/26 18:46:14 by asingh-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vars.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

unsigned g_nbr[32];
char g_chr[32][15];
int g_choice;

// choose dictionary according to main input

void chozer(char *c)
{
	if (c[0] == 'm')
		g_choice = 0;
	else if (c[0] == 'e')
		g_choice = 1;
	else
		printf("parse1");
}

// split the numbers

void numsplit(char *c)
{
	int i;
	int j;
	int sum;
	unsigned int temp;

	i = 0;
	j = 0;
	while(c[i] != '\0')
	{
		sum = 0;
		temp = 0;
		while(c[i] != ':')
		{
			temp = (unsigned int)c[i] - 48;
			sum = (sum * 10) + temp;
			i++;
		}
		g_nbr[j] = sum;
		j++;
		while(c[i] != '\n')
			i++;
		if (c[i] == '\0' || c[i] == '\n')
			break;
		i++;
	}
}

//split the strings

void charsplit(char *c)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	while(c[i])
	{
		k = 0;
		while(c[i] != ' ')
			i++;
		while(c[++i] != '\n')
		{
			g_chr[j][k] = c[i];
			k++;
		}
		g_chr[j][k] = '\n';
		j++;
		if (c[i] == '\0' || c[i] == '\n')
			break;
		i++;
	}
}

// actually access the dictionary

void endict(void)
{
	int fd;
	int sz;
	char *c;

	c = (char *) malloc(500 * sizeof(char));
	if (g_choice)
	{
		fd = open("en_num.dict" , O_RDONLY);
		sz = read(fd, c, 350);
	}
	else
	{
		fd = open("bm_num.dict" , O_RDONLY);
		sz = read(fd, c, 420);
	}
	if (fd < 0)
	{
		printf("r1"); 
		close(fd); 
	}
	c[sz] = '\0';
	numsplit(c);
	charsplit(c);
	/*instruct(g_nbr, g_chr);*/
	free(c);
	close(fd);
}
