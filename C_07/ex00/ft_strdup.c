/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 09:51:21 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/21 21:00:01 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *str)
{
	int		len;
	char	*new;

	len = 0;
	if (str == NULL)
		return (0);
	while (str[len] != '\0')
		len++;
	len = 0;
	new = malloc(len + 1);
	while (str[len] != '\0')
	{
		new[len] = str[len];
		len++;
	}
	new[len] = '\0';
	return (new);
}
