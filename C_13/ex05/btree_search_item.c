/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:04:07 by chenglee          #+#    #+#             */
/*   Updated: 2023/03/01 17:33:28 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	void	*res;

	if (!root)
		return (0);
	if ((*cmpf)(root->item, data_ref) < 0)
	{
		res = btree_search_item(root->left, data_ref, cmpf);
		if (res)
			return (res);
	}
	if ((*cmpf)(root->item, data_ref) == 0)
	{
		return (root->item);
	}
	else if ((*cmpf)(root->item, data_ref) >= 0)
	{
		res = btree_search_item(root->right, data_ref, cmpf);
		if (res)
			return (res);
	}
	return (0);
}
