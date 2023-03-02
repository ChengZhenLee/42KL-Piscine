/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 16:54:53 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/28 09:47:17 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*follow;
	t_list	*cur;
	t_list	*lead;

	follow = *begin_list;
	cur = follow->next;
	if (!(follow) || !(cur))
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
	*begin_list = cur;
}
