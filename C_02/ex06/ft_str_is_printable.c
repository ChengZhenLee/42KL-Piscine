/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:42:21 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/11 17:47:03 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	char	*temp;
	int		counter;

	temp = str;
	counter = 0;
	while (*temp != '\0')
	{
		if (*temp < 32 || *temp > 127)
			return (0);
		temp++;
		counter++;
	}
	if (counter == 0)
		return (1);
	return (1);
}
