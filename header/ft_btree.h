/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <mamaquig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 21:21:15 by agautier          #+#    #+#             */
/*   Updated: 2021/06/02 14:02:13 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

# include <stdlib.h>

typedef struct s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}				t_btree;

t_btree			*btree_create_node(void *item);
void			btree_apply_prefix(t_btree *root, void (*applyf)(void *));
void			btree_apply_infix(t_btree *root, void (*applyf)(void *));
void			btree_apply_suffix(t_btree *root, void (*applyf)(void *));
void			btree_insert_data(t_btree **root, void *item,
					int (*cmpf)(void *, void *));
void			*btree_search_item(t_btree *root, void *data_ref,
					int(*cmpf)(void *, void *));
int				btree_level_count(t_btree *root);
void			btree_apply_by_level(t_btree *root, void (*applyf)(void *item,
						int current_level, int is_first_elem));

void			btree_free(t_btree **root);

#endif
