/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <mamaquig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 19:48:49 by mamaquig          #+#    #+#             */
/*   Updated: 2021/03/06 18:38:51 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

/*
**	Retourne la taille de la plus grande branche passée en paramètre.
*/

int	btree_level_count(t_btree *root)
{
	int	level;
	int	ret;

	if (!root)
		return (0);
	level = btree_level_count(root->left);
	ret = btree_level_count(root->right);
	if (ret > level)
		level = ret;
	return (level + 1);
}
