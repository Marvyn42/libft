/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <mamaquig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 13:34:32 by mamaquig          #+#    #+#             */
/*   Updated: 2021/03/03 13:46:31 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

/*
**	Mettre les éléments d’une liste begin2 à la fin d’une autre liste begin1.
*/

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*list;

	if (!(*begin_list1) || !(begin_list2))
		return ;
	list = *begin_list1;
	while (list->next)
		list = list->next;
	list->next = begin_list2;
}
