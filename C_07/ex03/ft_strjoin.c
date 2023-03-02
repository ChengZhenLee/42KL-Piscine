/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 13:47:08 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/21 21:37:00 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_len(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	get_size(int size, char **strs, char *sep)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += get_len(strs[i]);
		i++;
	}
	len += get_len(sep) * (size - 1);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		c;
	int		i;
	int		j;
	char	*res;

	c = 0;
	i = -1;
	if (size == 0)
	{
		res = malloc(1);
		res[0] = '\0';
		return (res);
	}
	res = malloc(get_size(size, strs, sep));
	while (++i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			res[c++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i < size - 1)
			res[c++] = sep[j++];
	}
	res[c] = '\0';
	return (res);
}
