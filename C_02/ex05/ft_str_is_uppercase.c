/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:38:15 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/11 17:40:21 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	char	*temp;
	int		counter;

	temp = str;
	counter = 0;
	while (*temp != '\0')
	{
		if (*temp < 'A' || *temp > 'Z')
			return (0);
		temp++;
		counter++;
	}
	if (counter == 0)
		return (1);
	return (1);
}
