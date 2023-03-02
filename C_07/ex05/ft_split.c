/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:38:03 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/21 22:50:27 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	checkstr(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	get_num_str(char *str, char *charset, char ***res_ptr)
{
	int		i;
	int		sent;
	int		count;
	char	**res;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && checkstr(charset, str[i]) == 1)
			i++;
		sent = i;
		while (str[i] != '\0' && checkstr(charset, str[i]) == 0)
			i++;
		if (i > sent)
			count++;
	}
	res = malloc(sizeof(char *) * (count + 1));
	res[count] = NULL;
	*res_ptr = res;
}

void	dyall(char *str, char *charset, char **res)
{
	int	i;
	int	index;
	int	temp;

	index = 0;
	i = -1;
	while (str[++i] != '\0')
	{
		while (str[i] != '\0')
		{
			if (checkstr(charset, str[i]) == 0)
				break ;
			i++;
		}
		temp = i;
		while (str[i] != '\0')
		{
			if (checkstr(charset, str[i]) == 1)
				break ;
			i++;
		}
		res[index] = malloc(sizeof(char) * (i - temp) + 1);
		index++;
	}
}

void	write(char *str, char *charset, char **res)
{
	int	i;
	int	j;
	int	k;

	j = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0')
		{
			if (checkstr(charset, str[i]) == 0)
				break ;
			i++;
		}
		k = 0;
		while (str[i] != '\0')
		{
			if (checkstr(charset, str[i]) == 1)
				break ;
			res[j][k++] = str[i];
			i++;
		}
		res[j][i] = '\0';
		j++;
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**res;

	res = NULL;
	get_num_str(str, charset, &res);
	dyall(str, charset, res);
	write(str, charset, res);
	return (res);
}

/*int	main(void)
{
	char	**test;

	test = ft_split("Hello", " ");
}*/
