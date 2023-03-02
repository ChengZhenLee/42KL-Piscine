/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:17:37 by chenglee          #+#    #+#             */
/*   Updated: 2023/03/01 22:48:12 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		write(1, &str[i], 1);
}

void	put_error(char *cmd, char *fname, char *err)
{
	ft_putstr(basename(cmd));
	ft_putstr(": ");
	ft_putstr(fname);
	ft_putstr(": ");
	ft_putstr(err);
	ft_putstr("\n");
}

int	put_file(int file)
{
	char	buff[1];
	int		byte;

	byte = 1;
	while (byte != 0)
	{
		byte = read(file, buff, 1);
		if (errno != 0)
		{
			return (0);
		}
		write(1, &buff, 1);
	}
	write(1, "\n", 1);
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	infile;

	i = 0;
	if (argc == 1)
		return (0);
	while (++i < argc)
	{
		infile = open(argv[i], O_RDONLY);
		if (errno != 0)
		{
			put_error(argv[0], argv[i], strerror(errno));
			return (1);
		}
		if (put_file(infile) == 0)
		{
			put_error(argv[0], argv[i], strerror(errno));
			return (2);
		}
	}
	return (0);
}
