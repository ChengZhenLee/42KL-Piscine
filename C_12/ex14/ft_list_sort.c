/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 07:28:26 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/28 09:21:27 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	get_list_len(t_list	**begin_list)
{
	int		size;
	t_list	*point;

	size = 0;
	point = *begin_list;
	while (point)
	{
		point = point->next;
		size++;
	}
	return (size);
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*temp;
	t_list	*point;
	int		size;
	int		i;
	int		j;

	size = get_list_len(begin_list);
	i = -1;
	while (++i < size - 1)
	{
		j = -1;
		point = *begin_list;
		while (++j < size - 1 - i)
		{
			if ((*cmp)(point->data, point->next->data) > 0)
			{
				temp = point->data;
				point->data = point->next->data;
				point->next->data = temp;
			}
			point = point->next;
		}
	}
}
