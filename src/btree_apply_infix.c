/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <mamaquig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 15:55:26 by agautier          #+#    #+#             */
/*   Updated: 2021/03/06 22:29:14 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

/*
**	Applique la fonction passée en paramètre à l’item de chaque node
**	en parcourant l’arbre de manière infix.
**
**	Dans le parcours infixe, le traitement de la racine est fait entre les
**	appels sur les sous-arbres gauche et droit.
**
**			┌-----4-----┐
**		┌---2---┐	┌---6---┐
**		1		3	5		7
*/

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	btree_apply_infix(root->left, applyf);
	applyf(root->item);
	btree_apply_infix(root->right, applyf);
}
