/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 21:53:14 by chenglee          #+#    #+#             */
/*   Updated: 2023/03/02 20:16:47 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = -1;
	while (s1[++i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	checkarg(char c)
{
	char	test[6];
	int		i;

	test[0] = '+';
	test[1] = '-';
	test[2] = '/';
	test[3] = '*';
	test[4] = '%';
	test[5] = '\0';
	i = -1;
	while (test[++i])
	{
		if (c == test[i])
			return (i);
	}
	return (-1);
}
