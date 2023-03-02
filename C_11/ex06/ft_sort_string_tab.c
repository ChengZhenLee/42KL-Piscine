/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 11:14:28 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/26 12:51:46 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	getlen(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

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

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	int		size;
	char	*temp;

	i = -1;
	j = -1;
	if (!(tab))
		return ;
	size = getlen(tab);
	while (++i < size)
	{
		j = -1;
		while (++j < size - i - 1)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
		}
	}
	return ;
}

/*#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char **tab = malloc(sizeof(char *) * 4);
	for (int i = 0; i < 3; i++)
	{
		tab[i] = malloc(sizeof(char) * 2);
		tab[0][0] = 122;
		tab[0][1] = '\0';
	}
	tab[4] = 0;
	printf("%s\n", tab[0]);
	for (int i = 0; i < 3; i++)
	{
		printf("%s\n", tab[i]);
	}
	printf("this is the actual output\n");
	ft_sort_string_tab(tab);
	for (int i = 0; i < 3; i++)
	{
		printf("%s\n", tab[i]);
	}
}*/
