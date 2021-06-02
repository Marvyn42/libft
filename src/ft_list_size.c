/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <mamaquig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 17:16:25 by mamaquig          #+#    #+#             */
/*   Updated: 2021/02/28 17:42:28 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

/*
**	Renvoie le nombre d’éléments dans la liste.
*/

int	ft_list_size(t_list *begin_list)
{
	int	nb_elem;

	nb_elem = 0;
	while (begin_list)
	{
		nb_elem++;
		begin_list = begin_list->next;
	}
	return (nb_elem);
}
