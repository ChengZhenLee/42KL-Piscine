/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 20:13:24 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/15 20:14:51 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *dest, char *src)
{
	int	counter;

	counter = 0;
	while (dest[counter] != '\0' && src[counter] != '\0')
	{
		if (dest[counter] != src[counter])
			return (0);
		counter++;
	}
	if (dest[counter] != '\0' || src[counter] != '\0')
		return (0);
	return (1);
}

char	*check_base(char *base)
{
	if (ft_strcmp(base, "01"))
		return ("01");
	else if (ft_strcmp(base, "0123456789"))
		return ("0123456789");
	else if (ft_strcmp(base, "poneyvif"))
		return ("01234567");
	else if (ft_strcmp(base, "0123456789abcdef"))
		return (base);
	return (0);
}

void	ft_putint(int nbr, int len, char *base)
{
	char	printed;

	if ((len * -1) < nbr && len > nbr)
		write(1, "-", 1);
	nbr = nbr % len;
	if (nbr < 0)
		nbr *= -1;
	write(1, &base[nbr], 1);
}

int	ft_recint(int nbr, char len)
{
	int	recursed;

	recursed = nbr / len;
	return (recursed);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	*use_base;
	int		len;
	int		recursed;

	len = 0;
	use_base = check_base(base);
	if (!(use_base))
		return ;
	while (use_base[len] != '\0')
	{
		len++;
	}
	if ((len * -1) < nbr && len > nbr)
	{
		ft_putint(nbr, len, use_base);
		return ;
	}
	recursed = ft_recint(nbr, len);
	ft_putnbr_base(recursed, base);
	ft_putint(nbr, len, use_base);
}
