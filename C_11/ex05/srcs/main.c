/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 21:36:12 by chenglee          #+#    #+#             */
/*   Updated: 2023/03/02 20:19:42 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	void	(*f_array[5])(int, int);
	int		index;

	f_array[0] = add;
	f_array[1] = sub;
	f_array[2] = divi;
	f_array[3] = mult;
	f_array[4] = mod;
	if (argc != 4)
		return (1);
	index = checkarg(*argv[2]);
	if (index < 0 || ft_strlen(argv[2]) != 1)
	{
		ft_putstr("0\n");
		return (1);
	}
	(*f_array[index])(strtonum(argv[1]), strtonum(argv[3]));
	write(1, "\n", 1);
	return (0);
}
