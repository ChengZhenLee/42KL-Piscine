/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:16:48 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/22 19:21:39 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_len(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*put_base(char *str, int nb, char *base, int i)
{
	unsigned int	nbr;

	if (nb < 0)
		nbr = -nb;
	else
		nbr = nb;
	if (nb < get_len(base))
	{
		str[i] = base[nbr];
		i++;
		if (nb < 0)
		{
			str[i] = '-';
			i++;
		}
		str[i] = '\0';
	}
	else
	{
		str[i] = base[nbr % get_len(base)];
		put_base(str, nb / get_len(base), base, i + 1);
	}
	return (str);
}

char	*rev_str(char *str)
{
	char	temp;
	int		len;
	int		counter;

	len = get_len(str);
	counter = 0;
	while (counter < len / 2)
	{
		temp = str[counter];
		str[counter] = str[len - counter - 1];
		str[len - counter - 1] = temp;
	}
	return (str);
}
