/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:32:28 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/11 16:43:20 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	char	*temp;
	int		counter;

	temp = str;
	counter = 0;
	while (*temp != '\0')
	{
		if ((*temp < 'a' || *temp > 'z') && (*temp < 'A' || *temp > 'Z'))
			return (0);
		temp++;
		counter++;
	}
	if (counter == 0)
	{
		return (1);
	}
	return (1);
}
