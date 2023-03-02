/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 21:48:16 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/26 00:45:25 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	get_len(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*str_cpy(char *str)
{
	char	*copy;
	int		i;

	i = -1;
	copy = malloc(get_len(str) + 1);
	while (str[++i] != '\0')
	{
		copy[i] = str[i];
	}
	copy[i] = '\0';
	return (copy);
}

void	freeall(struct s_stock_str *res, int depth)
{
	int	i;

	i = -1;
	while (++i < depth)
		free(res[i].copy);
	free(res);
	return ;
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*res;

	i = -1;
	res = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (res == NULL)
		return (0);
	while (++i < ac)
	{
		if (av[i] == NULL)
		{
			freeall(res, i);
			return (0);
		}
		res[i].copy = malloc(get_len(av[i]) + 1);
		if (!(res[i].copy))
			return (0);
		res[i].size = get_len(av[i]);
		res[i].str = av[i];
		res[i].copy = str_cpy(av[i]);
	}
	res[i].str = 0;
	return (res);
}
/*#include <stdio.h>
int    main(void)
{
    char        *str[3] = {"what", 0, "chichi"};
    int            n;
    t_stock_str    *i;

    i = ft_strs_to_tab(3, str);
    n = -1;
    while (++n < 4)
	{
		if ((i + n) == NULL)
		{
			printf("null pointer\n");
			continue;
		}
		printf("t_stock_str  -> size: %d\n", (i + n)->size);
		printf("t_stock_str  -> str : %s\n", (i + n)->str);
		printf("t_stock_str  -> copy: %s\n", (i + n)->copy);
    }
    return (0);
}*/
