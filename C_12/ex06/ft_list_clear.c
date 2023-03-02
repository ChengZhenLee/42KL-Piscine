/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 16:13:04 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/27 16:16:43 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void*))
{
	if (begin_list->next == NULL)
	{
		(*free_fct)(begin_list->data);
		free(begin_list);
		return ;
	}
	ft_list_clear(begin_list->next, (*free_fct));
	(*free_fct)(begin_list->data);
	free(begin_list);
}
