/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 16:01:28 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/28 21:18:36 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_direction(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	dir;

	i = -1;
	while (++i < length - 1)
	{
		dir = (*f)(tab[i], tab[i + 1]);
		if (dir < 0)
			return (1);
		if (dir > 0)
			return (-1);
	}
	return (dir);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	dir;

	if (!tab)
		return (1);
	dir = ft_direction(tab, length, (*f));
	i = -1;
	while (++i < length - 1)
	{
		if (((*f)(tab[i], tab[i + 1]) > 0) && dir == 1)
			return (0);
		else if (((*f)(tab[i], tab[i + 1]) < 0) && dir == -1)
			return (0);
	}
	return (1);
}
