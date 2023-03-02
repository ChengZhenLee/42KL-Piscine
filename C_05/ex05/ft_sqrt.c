/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:49:46 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/22 13:59:08 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	x;

	x = 0;
	if (nb == 1)
		return (1);
	while (x <= nb / 2)
	{
		if (x * x > nb)
			break ;
		if (x * x == nb)
			return (x);
		x++;
	}
	return (0);
}

/*int main(void)
{
	int test = ft_sqrt(2092575376);
	printf("%i", test);
}*/
