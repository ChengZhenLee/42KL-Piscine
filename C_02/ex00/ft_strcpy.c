/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 21:50:21 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/13 21:52:01 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		dest[counter] = str[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}
