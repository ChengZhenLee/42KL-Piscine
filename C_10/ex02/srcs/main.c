/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:26:00 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/28 20:59:55 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

//#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;
	int	byte;

	if (argc <= 3)
	{
		ft_puterr(argv[0], argv[1], strerror(errno), 0);
		return (1);
	}
	i = 2;
	if (ft_strcmp(argv[1], "-c") != 0)
	{
		ft_puterr(argv[0], argv[1], strerror(errno), 1);
		return (2);
	}
	byte = strtonum(argv[2]);
	if (byte < 0)
	{
		ft_puterr(argv[0], argv[2], strerror(errno), 2);
		return (3);
	}
	while (++i < argc)
		print_file(argv[0], argv[i], byte);
	return (0);
}
