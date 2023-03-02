/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 13:05:06 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/12 14:11:06 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char n);

void	rush(int x, int y)
{
	int	w;
	int	h;

	h = 0;
	while (h < y && x > 0 && y > 0)
	{
		w = 0;
		while (w < x)
		{
			if ((h == 0 || h == y - 1) && w == 0)
				ft_putchar('o');
			else if ((h == 0 || h == y - 1) && w == x - 1)
				ft_putchar('o');
			else if (h > 0 && h < y - 1 && w > 0 && w < x - 1)
				ft_putchar(' ');
			else if (h > 0 && h < y - 1 && (w == 0 || w == x - 1))
				ft_putchar('|');
			else
				ft_putchar('-');
			w++;
		}
		ft_putchar('\n');
		h++;
	}
}
