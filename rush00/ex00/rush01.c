/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 13:05:50 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/12 17:48:00 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char n);

void	rush(int x, int y)
{
	int	cx;
	int	cy;

	cy = 0;
	while (cy < y && x > 0 && y > 0)
	{
		cx = 0;
		while (cx < x)
		{
			if ((!cy && !cx) || (cy == y -1 && cx == x -1 && y > 1 && x > 1))
				ft_putchar('/');
			else if ((cy == 0 && cx == x -1) || (cy == y -1 && cx == 0))
				ft_putchar(92);
			else if (cy > 0 && cy < y - 1 && cx > 0 && cx < x - 1)
				ft_putchar(' ');
			else
				ft_putchar('*');
			cx++;
		}
		cy++;
		ft_putchar('\n');
	}
}
