/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:19:46 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/28 15:51:51 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_insert(t_list *a, t_list *b)
{
	a->next = b->next;
	b->next = a;
}

void	ft_insertfirst(t_list **begin_list, t_list *a, t_list *b)
{
	a->next = b;
	*begin_list = a;
}

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
		int (*cmp)())
{
	t_list	*temp;
	t_list	*p1;
	t_list	*p2;

	p1 = *begin_list1;
	p2 = *begin_list2;
	while (p2 && (*cmp)(p1->data, p2->data) >= 0)
	{
		temp = p2;
		p2 = p2->next;
		ft_insertfirst(begin_first, temp, p1);
		p1 = temp;
	}
	while (p1->next && p2)
	{
		if ((*cmp)(p1->data, p2->data) <= 0
			&& (*cmp)(p1->next->data, p2->data) >= 0)
		{
			temp = p2;
			p2 = p2->next;
			ft_insert(temp, p1);
		}
		p1 = p1->next;
	}
	p1->next = p2;
}
