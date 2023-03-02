/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 19:15:28 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/27 20:36:00 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
		int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*cur;
	t_list	*temp;

	cur = *begin_list;
	while (cur)
	{
		if ((*cmp)(cur->next->data, data_ref) == 0)
		{
			temp = cur->next;
			cur = cur->next->next;
			(*free_fct)(temp->data);
			free(temp);
		}
		cur = cur->next;
	}
	cur = *begin_list;
	if ((*cmp)(cur->data, data_ref) == 0 && cur)
	{
		*begin_list = cur->next;
		(*free_fct)(cur->data);
		free(cur);
	}
}
