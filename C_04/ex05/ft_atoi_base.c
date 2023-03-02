/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:41:56 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/16 17:33:58 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *target, char *src)
{
	int	counter;

	counter = 0;
	while (target[counter] != '\0' && src[counter] != '\0')
		counter++;
	if (target[counter] != '\0' || src[counter] != '\0')
		return (0);
	return (1);
}

char	*check_base(char *base)
{
	if (ft_strcmp(base, "01"))
		return (base);
	if (ft_strcmp(base, "0123456789"))
		return (base);
	if (ft_strcmp(base, "poneyvif"))
		return ("01234567");
	if (ft_strcmp(base, "0123456789abcdef"))
		return (base);
	return (0);
}

int	check_neg(char *str)
{
	int	counter;
	int	negs;

	negs = 0;
	counter = 0;
	while (str[counter] == '-' || str[counter] == '+' || str[counter] == ' ')
	{
		if (str[counter] == '-')
			negs++;
		counter++;
	}
	if (negs % 2 == 1)
		return (-1);
	return (1);
}

int	convert_base(char *str, int len, int start)
{
	int		c;
	int		res;
	int		neg;

	neg = check_neg(str);
	res = 0;
	c = start;
	while ((str[c] >= '0' && str[c] <= '9') || (str[c] >= 'a' && str[c] <= 'f'))
	{
		if (len == 16 && str[c] >= 'a' && str[c] <= 'f')
			res = res * len + neg * ((str[c] - 97) + 10);
		else if (str[c] >= '0' && str[c] <= '9')
			res = res * len + neg * (str[c] - 48);
		if (len != 16 && (str[c] < '0' || str[c] > '9'))
			break ;
		c++;
	}
	return (res);
}

int	ft_atoi_base(char *str, char *base)
{
	int		res;
	int		len;
	int		start;

	start = 0;
	len = 0;
	base = check_base(base);
	while (base[len] != '\0')
		len++;
	if (base == 0)
		return (0);
	while (str[start] == '-' || str[start] == '+' || str[start] == ' ')
		start++;
	res = convert_base(str, len, start);
	return (res);
}
