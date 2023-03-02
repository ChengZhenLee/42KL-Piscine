/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 10:47:56 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/23 21:19:28 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

//#include <stdio.h>

int	ft_filelen(int file)
{
	char	buff[1];
	int		len;
	int		flag;

	len = 0;
	flag = 1;
	while (flag != 0)
	{
		flag = read(file, buff, 1);
		if (errno != 0)
			return (-1);
		len++;
	}
	return (len);
}

int	strtonum(char	*str)
{
	int	i;
	int	num;

	i = -1;
	num = 0;
	while (str[++i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (-1);
		num = num * 10 + (str[i] - 48);
	}
	return (num);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = -1;
	while (s1[++i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
