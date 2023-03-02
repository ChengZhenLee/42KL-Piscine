/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:11:53 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/11 13:25:48 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	outer;
	int	inner;
	int	temp;

	outer = 0;
	while (outer < size)
	{
		inner = 0;
		while (inner < size - outer - 1)
		{
			if (tab[inner] > tab[inner + 1])
			{
				temp = tab[inner];
				tab[inner] = tab[inner + 1];
				tab [inner + 1] = temp;
			}
			inner++;
		}
		outer++;
	}
}
