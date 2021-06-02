/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <mamaquig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 18:02:04 by mamaquig          #+#    #+#             */
/*   Updated: 2021/03/04 19:01:17 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

/*
**	Intègre les éléments d’une liste triée begin2 dans une autre liste triée
**	begin1, de sorte que la liste begin1 reste triée par ordre croissant.
*/

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
			int (*cmp)())
{
	t_list	*list;
	t_list	*tmp;

	list = *begin_list1;
	while (begin_list2)
	{
		while (list->next && cmp(begin_list2->data, list->next->data) < 0)
			list = list->next;
		tmp = list->next;
		list->next = begin_list2;
		begin_list2 = begin_list2->next;
		list->next->next = tmp;
	}
}
