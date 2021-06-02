/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 13:46:42 by mamaquig          #+#    #+#             */
/*   Updated: 2021/03/04 19:08:57 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

/*
**	Trie par ordre croissant le contenu de la liste, en comparant deux
**	éléments grâce à une fonction de comparaison de données des deux éléments.
*/

/*
**	             ┌---->--->--->--->┐
**		1        4---<----3        2   -> ...
**		└--->---->---->---┘
*/

static void	ft_rev_elem(t_list **begin_list, t_list *prev)
{
	t_list	*next;
	t_list	*curr;

	if (!(*begin_list) || !(*begin_list)->next)
		return ;
	curr = *begin_list;
	if (prev)
		prev->next = curr->next;
	next = curr->next;
	curr->next = next->next;
	next->next = curr;
	*begin_list = next;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*curr;
	t_list	*prev;
	int		done;

	if (!(*begin_list))
		return ;
	done = 0;
	while (!done)
	{
		done = 1;
		curr = *begin_list;
		prev = NULL;
		while (curr->next)
		{
			if (cmp(curr->data, curr->next->data) < 0)
			{
				ft_rev_elem(&curr, prev);
				done = 0;
			}
			prev = curr;
			curr = curr->next;
		}
	}
}
