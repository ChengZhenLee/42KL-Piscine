/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 09:12:09 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/28 21:39:13 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

//#include <stdio.h>

int	ft_filelen(int file);

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		write(1, &str[i], 1);
}

int	ft_putwholefile(int file)
{
	int		i;
	char	buff[1];

	i = 1;
	while (i != 0)
	{
		i = read(file, buff, 1);
		if (errno != 0)
			return (-1);
		write(1, &buff, 1);
	}
	return (1);
}

int	ft_putfile(char *fname, int file, int byte)
{
	int		i;
	char	buff[1];
	int		len;

	i = -1;
	len = ft_filelen(file);
	file = open(fname, O_RDONLY);
	if (len < 0)
		return (-1);
	if (byte > len)
		return (ft_putwholefile(file));
	while (++i < len - byte)
	{
		read(file, buff, 1);
		if (errno != 0)
			return (-1);
	}
	while (i != 0)
	{
		i = read(file, buff, 1);
		if (errno != 0)
			return (-1);
		write(1, &buff, 1);
	}
	return (1);
}

void	ft_puterr(char *pname, char *fname, char *err, int mode)
{
	ft_putstr(pname);
	ft_putstr(": ");
	if (mode == 0)
		ft_putstr("insufficient arguments\n");
	else if (mode == 1)
	{
		ft_putstr("illegal option -- ");
		ft_putstr(fname);
		ft_putstr("\n");
	}
	else if (mode == 2)
	{
		ft_putstr("illegal offset -- ");
		ft_putstr(fname);
		ft_putstr("\n");
	}
	else
	{
		ft_putstr(fname);
		ft_putstr(": ");
		ft_putstr(err);
		ft_putstr("\n");
	}
}

int	print_file(char *pname, char *fname, int byte)
{
	int	infile;
	int	flag;

	infile = open(fname, O_RDONLY);
	if (errno != 0)
	{
		ft_puterr(pname, fname, strerror(errno), 3);
		return (1);
	}
	flag = ft_putfile(fname, infile, byte);
	if (flag < 0)
	{
		ft_puterr(pname, fname, strerror(errno), 3);
		return (2);
	}
	return (0);
}
