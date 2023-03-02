/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 19:55:45 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/27 16:52:53 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int			len;
	t_list		*temp;

	len = 0;
	temp = begin_list;
	while (temp->next != NULL)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}
