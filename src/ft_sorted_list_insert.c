/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <mamaquig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 16:30:00 by mamaquig          #+#    #+#             */
/*   Updated: 2021/03/04 18:02:56 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

/*
**	Crée un nouvel élément et l’insère dans une liste triée de sorte que la
**	liste reste triée par ordre croissant.
*/

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*list_ptr;
	t_list	*tmp;

	list_ptr = *begin_list;
	while (list_ptr->next && cmp(data, list_ptr->next->data) < 0)
		list_ptr = list_ptr->next;
	tmp = list_ptr->next;
	list_ptr->next = ft_create_elem(data);
	list_ptr->next->next = tmp;
}
