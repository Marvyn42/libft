/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <mamaquig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 17:44:30 by agautier          #+#    #+#             */
/*   Updated: 2021/03/06 22:30:10 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

/*
**	Retourne le premier élèment correspondant à la donnée de référence
**	passée en paramètre.
**	L'arbre est parcouru de manière infix.
*/

void	*btree_search_item(t_btree *root, void *data_ref,
			int (*cmpf)(void *, void *))
{
	void	*ret;

	if (!root || !data_ref)
		return (NULL);
	ret = btree_search_item(root->left, data_ref, cmpf);
	if (ret)
		return (ret);
	if (cmpf(root->item, data_ref) == 0)
		return (root->item);
	ret = btree_search_item(root->right, data_ref, cmpf);
	if (ret)
		return (ret);
	return (NULL);
}
