/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:44:50 by chenglee          #+#    #+#             */
/*   Updated: 2023/03/02 18:14:55 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_readfile(int infile, int totalbytes, int flag)
{
	char	buffer[16];
	char	oldbuffer[16];
	int		byte;

	oldbuffer[0] = '\0';
	byte = 16;
	while (byte == 16)
	{
		byte = read(infile, buffer, 16);
		totalbytes += byte;
		if (ft_strcmp(buffer, oldbuffer) == 0)
		{
			ft_putstr("*");
			ft_copystr(oldbuffer, buffer);
			continue ;
		}
		ft_copystr(oldbuffer, buffer);
		intdec_to_hex(totalbytes, flag);
		ft_putascii(buffer, flag);
		ft_putword(buffer, flag);
	}
}

void	ft_putascii(char *str, int flag)
{
	int	i;

	i = -1;
	ft_putstr(" ");
	if (flag)
		ft_putstr(" ");
	while (++i < 16)
	{
		if (i == 8 && flag)
			ft_putstr(" ");
		intdec_to_hex(str[i], flag);
		ft_putstr(" ");
	}
	ft_putstr("  ");
}

void	ft_putword(char *str, int flag)
{
	int	remainder;

	if (flag)
		return ;
	remainder = 16 - ft_strlen(str);
	ft_putstr("|");
	ft_putstr(str);
	while (--remainder >= 0)
		ft_putstr(" ");
	ft_putstr("|\n");
}
