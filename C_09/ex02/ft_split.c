/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 17:08:01 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/26 22:18:34 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	isin(char c, char *charset)
{
	int	i;

	i = -1;
	while (charset[++i])
	{
		if (c == charset[i])
			return (1);
	}
	return (0);
}

int	numofstr(char *str, char *charset)
{
	int	i;
	int	temp;
	int	count;

	count = 0;
	i = 0;
	while (str[++i])
	{
		while (str[i] && isin(str[i], charset))
			i++;
		temp = i;
		while (str[i] && !(isin(str[i], charset)))
			i++;
		if (temp < i)
			count++;
		if (!str[i])
			break ;
	}
	return (count);
}

int	strsize(char *str, char *charset, int i)
{
	int	size;

	size = 0;
	while (str[i] && !(isin(str[i], charset)))
	{
		size++;
		i++;
	}
	return (size);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		i;
	int		index;
	int		j;

	index = 0;
	i = 0;
	if (str == NULL || charset == NULL)
		return (0);
	res = malloc((numofstr(str, charset) + 1) * sizeof(char *));
	while (str[i])
	{
		j = 0;
		while (str[i] && isin(str[i], charset))
			i++;
		if (!str[i])
			break ;
		res[index] = malloc(strsize(str, charset, i) * sizeof(char) + 1);
		while (str[i] && !(isin(str[i], charset)))
			res[index][j++] = str[i++];
		res[index][j] = '\0';
		index++;
	}
	res[index] = 0;
	return (res);
}

/*#include <stdio.h>
void	print_array(char **array)
{
	int i;

	i = 0;
	while (array[i])
	{
		printf("%s\n", array[i]);
		i++;
	}
}

int		main(void)
{
	char **array;

	array = ft_split("         ", " ");
	printf("Actual output:\n");
	print_array(array);
	free(array);

	array = ft_split("Hello;World!people;", ";!");
	printf("Actual output:\n");
	print_array(array);
	free(array);

	array = ft_split("Split$$this$$string$$with$$double$$dollar", "$$");
	printf("Actual output:\n");
	print_array(array);
	free(array);

	return (0);
}*/
