/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:29:47 by chenglee          #+#    #+#             */
/*   Updated: 2023/03/02 18:05:46 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

// Outputs the proper error message
int	puterror(char *fname, char *str, char *strerror, int mode)
{
	if (mode == 2)
	{
		ft_putstr(fname);
		ft_putstr(": hexdump: illegal option -- ");
		ft_putstr(str);
	}
	if (mode == 3)
	{
		ft_putstr(fname);
		ft_putstr(": hexdump: ");
		ft_putstr(basename(str));
		ft_putstr(": ");
		ft_putstr(strerror);
	}
	ft_putstr("\n");
	return (mode);
}
