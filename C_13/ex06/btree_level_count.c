/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 19:42:24 by chenglee          #+#    #+#             */
/*   Updated: 2023/03/01 19:51:25 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	int	ldepth;
	int	rdepth;

	ldepth = 1;
	rdepth = 1;
	if (!(root))
		return (0);
	ldepth += btree_level_count(root->left);
	rdepth += btree_level_count(root->right);
	if (ldepth > rdepth)
		return (ldepth);
	return (rdepth);
}
