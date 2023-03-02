/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:55:02 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/26 00:58:25 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	write_string(char *str)
{
	int	c;

	c = -1;
	while (str[++c] != '\0')
		ft_putchar(str[c]);
	ft_putchar('\n');
}

void	write_num(int num)
{
	if (num < 10)
	{
		ft_putchar(num + 48);
		return ;
	}
	else
	{
		write_num(num / 10);
		ft_putchar(num % 10 + 48);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	len;

	len = -1;
	if (par == NULL)
		return ;
	while (par[++len].str != 0)
	{
		write_num(par[len].size);
		write(1, "\n", 1);
		write_string(par[len].str);
		write_string(par[len].copy);
	}
}

/*int    main(void)
{
    char        *str[3] = {"low", 0, "STR6789"};
    int            n;
    t_stock_str    *i;

    i = ft_strs_to_tab(3, str);
    n = 0;
    ft_show_tab(i);
    while (n < 4)
    {
        printf("t_stock_str  -> size: %d\n", (i + n)->size);
        printf("t_stock_str  -> str : %s\n", (i + n)->str);
        printf("t_stock_str  -> copy: %s\n", (i + n)->copy);
        n++;
    }
    return (0);
}*/
