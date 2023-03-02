/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:22:19 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/28 10:08:03 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*cur;
	t_list	*follow;
	t_list	*lead;

	follow = begin_list;
	cur = follow->next;
	if (!follow || !cur)
		return ;
	lead = cur->next;
	follow->next = NULL;
	while (lead)
	{
		cur->next = follow;
		follow = cur;
		cur = lead;
		lead = lead->next;
	}
	cur->next = follow;
	begin_list = cur;
}
