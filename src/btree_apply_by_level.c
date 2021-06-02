/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <mamaquig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 18:23:03 by mamaquig          #+#    #+#             */
/*   Updated: 2021/03/06 22:18:09 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

/*
**	Applique la fonction passée en paramètre à chaque noeud de l’arbre.
**	L’arbre est parcouru étage par étage.
*/

/*
**		┌-----10-----┐
**	┌---20---┐	┌---30---┐
**	40		50	60		70
*/

void	prefix(t_btree *root, void (*applyf)(void *item,
	int current_level, int is_first_elem), int level, int current_level)
{
	if (!root)
		return ;
	if (current_level == level)
		applyf(root->item, level, 1);
	prefix(root->left, applyf, level, current_level + 1);
	prefix(root->right, applyf, level, current_level + 1);
}

void	btree_apply_by_level(t_btree *root, void (*applyf)(void *item,
			int current_level, int is_first_elem))
{
	int	max_deep;
	int	level;
	int	current_level;

	current_level = 0;
	max_deep = btree_level_count(root);
	level = 0;
	while (level < max_deep)
	{
		prefix(root, applyf, level, current_level);
		level++;
	}
}
