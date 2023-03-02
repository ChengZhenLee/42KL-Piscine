/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 19:55:39 by chenglee          #+#    #+#             */
/*   Updated: 2023/03/01 21:43:06 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

typedef struct s_list
{
	t_btree			*node;
	struct s_list	*next;
	int				level;
}	t_list;

t_list	*create_list_elem(t_btree *node, int level)
{
	t_list	*res;

	if (!node)
		return (0);
	res = malloc(sizeof(s_list));
	res->node = node;
	res->next = 0;
	res->level = level;
	return (res);
}

t_list	*free_move(t_list *node)
{
	t_list	*temp;

	temp = node;
	temp = temp->next;
	free(node);
	return (temp);
}

int	check_is_first(t_list *node, int a, int b)
{
	if (!(node->next))
		return (0);
	return (a > b);
}

void	btree_apply_by_level(t_btree *root,
		void (*applyf)(void *item, int current_level, int isfirst))
{
	t_list	*head;
	t_list	*last;
	int		level;
	int		isfirst;

	if (!root)
		return ;
	isfirst = 1;
	level = 0;
	head = ft_create_elem(root, level);
	last = head;
	while (head)
	{
		(*applyf)(head->node->item, head->level, isfirst);
		if (head->node->left)
			last->next = ft_create_elem(head->node->left, head->level + 1);
		is_first = check_is_first(last->next, last->next->level, last->level);
		last = last->next;
		if (head->node->right)
			last->next = ft_create_elem(head->node->right, head->level + 1);
		is_first = check_is_first(last->next, last->next->level, last->level);
		last = last->next;
		head = free_move(head);
	}
}
