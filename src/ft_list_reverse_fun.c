/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <mamaquig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 17:24:07 by mamaquig          #+#    #+#             */
/*   Updated: 2021/03/04 18:54:47 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

/*
**	Inverse l’ordre des 'data' des éléments de la liste.
*/

void	ft_list_reverse_fun(t_list *begin_list)
{
	int		list_size;
	int		i;
	void	*tmp;

	if (!begin_list || !begin_list->next)
		return ;
	list_size = ft_list_size(begin_list) - 1;
	i = 0;
	while (i <= list_size / 2)
	{
		tmp = ft_list_at(begin_list, i)->data;
		ft_list_at(begin_list, i)->data = ft_list_at(begin_list,
			list_size - i)->data;
		ft_list_at(begin_list, list_size - i)->data = tmp;
		i++;
	}
}
