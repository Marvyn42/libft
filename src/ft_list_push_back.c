/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <mamaquig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 17:41:58 by mamaquig          #+#    #+#             */
/*   Updated: 2021/03/04 18:47:02 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

/*
**	Ajoute à la fin de la liste un nouvel élément de type t_list.
*/

/*
**	        0x00                   0x01                   0x02
**	┌-----------------┐    ┌-----------------┐    ┌-----------------┐
**	|                 |    |                 |    |                 |
**	|  - data = 42    |    |  - data = 42    |    |  - data = 21    |
**	|                 | -► |                 | -► |                 |
**	|  - next = 0x01  |    |  - next = 0x02  |    |  - next = NULL  |
**	|                 |    |                 |    |                 |
**	└-----------------┘    └-----------------┘    └-----------------┘
*/

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*current;

	if (*begin_list == NULL)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	current = *begin_list;
	while (current->next)
		current = current->next;
	current->next = ft_create_elem(data);
}
