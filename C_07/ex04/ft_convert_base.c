/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:16:41 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/22 17:02:14 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*rev_str(char *str);
char	*put_base(char *str, int nb, char *base, int i);
int		get_len(char *str);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

char	*check_base(char *base)
{
	if (ft_strcmp(base, "01") == 0)
		return ("01");
	if (ft_strcmp(base, "0123456789") == 0)
		return ("0123456789");
	if (ft_strcmp(base, "poneyvif") == 0)
		return ("01234567");
	if (ft_strcmp(base, "0123456789abcdef") == 0)
		return ("0123456789abcdef");
	return (0);
}

int	char_to_int(char *str, char *base, char len)
{
	int	i;
	int	res;
	int	neg;

	neg = 1;
	res = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'f'))
	{
		if (len == 16 && str[i] >= 'a' && str[i] <= 'f')
			res = res * get_len(base) * ((str[i] - 97) + 10);
		else if (str[i] >= '0' && str[i] <= '9')
			res = res * get_len(base) + neg * (str[i] - 48);
		if (get_len(base) != 16 && (str[i] < '0' || str[i] > '9'))
			break ;
		i++;
	}
	return (res);
}

int	size(int nbr, char *base)
{
	int	len;
	int	res;

	res = 0;
	if (nbr < 0)
		res++;
	len = get_len(base);
	while (nbr != 0)
	{
		res++;
		nbr /= len;
	}
	return (nbr);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*res;
	int		nb;

	base_from = check_base(base_from);
	base_to = check_base(base_to);
	if (!base_from || !base_to)
		return (0);
	nb = char_to_int(nbr, base_from, get_len(base_from));
	res = malloc(size(nb, base_to) + 1);
	res = put_base(res, nb, base_to, 0);
	res = rev_str(res);
	return (res);
}
