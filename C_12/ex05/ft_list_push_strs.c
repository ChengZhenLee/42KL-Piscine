/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 20:58:19 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/27 15:55:58 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		i;
	t_list	*head;
	t_list	*node;

	i = -1;
	head = NULL;
	while (++i < size)
	{
		node = ft_create_elem(strs[i]);
		if (!(head))
		{
			head = node;
			node->next = NULL;
		}
		else
		{
			node->next = head->next;
			head = node;
		}
	}
	return (head);
}
