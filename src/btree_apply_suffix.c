/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <mamaquig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 15:49:21 by mamaquig          #+#    #+#             */
/*   Updated: 2021/03/06 22:29:34 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

/*
**	Applique la fonction passée en paramètre à l’item de chaque node,
**	en parcourant l’arbre de manière suffix.
**
**	Dans le parcours suffixe, la racine est traitée après les appels récursifs
**	sur les sous-arbres gauche et droit (faits dans cet ordre).
**
**			┌-----7-----┐
**		┌---3---┐	┌---6---┐
**		1		2	4		5
*/

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	btree_apply_suffix(root->left, applyf);
	btree_apply_suffix(root->right, applyf);
	applyf(root->item);
}
