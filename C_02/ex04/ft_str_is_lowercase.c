/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:31:31 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/12 15:17:54 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	char	*temp;
	int		counter;

	temp = str;
	counter = 0;
	while (*temp != '\0')
	{
		if (*temp < 'a' || *temp > 'z')
			return (0);
		temp++;
		counter++;
	}
	if (counter == 0)
		return (1);
	return (1);
}
