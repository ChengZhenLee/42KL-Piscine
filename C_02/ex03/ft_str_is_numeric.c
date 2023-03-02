/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:26:42 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/11 19:22:29 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	char	*temp;
	int		counter;

	temp = str;
	counter = 0;
	while (*temp != '\0')
	{
		if (*temp < '0' || *temp > '9')
			return (0);
		temp++;
		counter++;
	}
	if (counter == 0)
		return (1);
	return (1);
}
