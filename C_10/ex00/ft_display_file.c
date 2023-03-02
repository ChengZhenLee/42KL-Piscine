/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:30:18 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/28 15:59:22 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putstr(char	*str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
	{
		write(1, &str[i], 1);
	}
	write(1, "\n", 1);
}

void	read_file(int file)
{
	char	buff[1];

	while (read(file, buff, 1) != 0)
	{
		write(1, &buff, 1);
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	infile;

	infile = open(argv[1], O_RDONLY);
	if (argc <= 1)
	{
		ft_putstr(MISSINGMSG);
		return (1);
	}
	if (argc > 2)
	{
		ft_putstr(TOOMSG);
		return (2);
	}
	infile = open(argv[1], O_RDONLY);
	if (infile == -1)
	{
		ft_putstr(CANTMSG);
		return (3);
	}
	read_file(infile);
	return (0);
}
