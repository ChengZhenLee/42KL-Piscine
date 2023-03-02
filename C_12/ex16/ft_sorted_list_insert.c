/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 10:11:30 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/28 10:39:42 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_insert(t_list	*a, t_list	*b)
{
	a->next = b;
	b = a;
}

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*node;
	t_list	*temp;

	node = ft_create_elem(data);
	temp = *begin_list;
	if (!temp)
		*begin_list = node;
	if ((*cmp)(node->data, temp->data) < 0)
	{
		ft_insert(node, temp);
		return ;
	}
	while (temp->next)
	{
		if ((*cmp)(node->data, temp->data) >= 0
			&& (*cmp)(node->data, temp->next->data) <= 0)
		{
			ft_insert(node, temp->next);
			return ;
		}
		temp = temp->next;
	}
	temp->next = node;
}
