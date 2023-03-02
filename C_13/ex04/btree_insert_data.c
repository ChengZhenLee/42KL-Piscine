/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:28:27 by chenglee          #+#    #+#             */
/*   Updated: 2023/03/01 16:59:25 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	insert_node(t_btree *a, t_btree *b, int dir)
{
	if (dir < 0)
	{
		a->left = b->left;
		b->left = a;
	}
	if (dir >= 0)
	{
		a->right = b->right;
		b->right = a;
	}
}

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void*, void*))
{
	if (!root)
		return ;
	if (!(*root))
	{
		*root = btree_create_node(item);
		return ;
	}
	if ((*cmpf)(item, (*root)->item) < 0)
	{
		if ((*cmpf)(item, (*root)->left->item) > 0 || !((*root)->left))
		{
			insert_node(btree_create_node(item), *root, -1);
			return ;
		}
		btree_insert_data(&((*root)->left), item, cmpf);
	}
	if ((*cmpf)(item, (*root)->item) >= 0)
	{
		if ((*cmpf)(item, (*root)->right->item) <= 0 || !((*root)->right))
		{
			insert_node(btree_create_node(item), *root, 1);
			return ;
		}
		btree_insert_data(&((*root)->right), item, cmpf);
	}
}
