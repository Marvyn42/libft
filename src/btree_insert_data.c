/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <mamaquig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 15:56:26 by mamaquig          #+#    #+#             */
/*   Updated: 2021/03/06 22:29:53 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

/*
**	Insère l’élément item dans un arbre.
**	L’arbre passé en paramètre sera trié : pour chaque node tous les élements
**	inférieurs se situent dans la partie gauche et tous les éléments
**	supérieurs ou égaux à droite.
*/

/*
**			┌-----49-----┐
**		┌---21---┐	┌---60---┐
**		10		35	50		70
**			 25
*/

void	btree_insert_data(t_btree **root, void *item,
			int (*cmpf)(void *, void *))
{
	if (!root || !(*root))
	{
		*root = btree_create_node(item);
		return ;
	}
	if ((*root)->left && (cmpf((*root)->item, item) > 0))
		btree_insert_data(&((*root)->left), item, cmpf);
	else if ((*root)->right && (cmpf((*root)->item, item) <= 0))
		btree_insert_data(&((*root)->right), item, cmpf);
	else if (cmpf((*root)->item, item) > 0)
		(*root)->left = btree_create_node(item);
	else
		(*root)->right = btree_create_node(item);
}
