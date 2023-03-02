/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:13:01 by chenglee          #+#    #+#             */
/*   Updated: 2023/03/02 16:58:16 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	int		infile;
	int		i;
	int		totalbytes;
	char	flag;

	flag = 0;
	totalbytes = 0;
	i = 1;
	if (argc < 2)
		return (puterror(argv[0], argv[1], "", 1));
	if (ft_strcmp(argv[1], "-C") == 0)
	{
		flag = 1;
		i = 2;
	}
	while (i < argc)
	{
		infile = open(argv[i], O_RDONLY);
		if (errno)
			return (puterror(argv[0], argv[i], strerror(errno), 3));
		ft_readfile(infile, totalbytes, flag);
	}
	return (0);
}
