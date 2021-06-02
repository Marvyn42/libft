/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 18:46:39 by agautier          #+#    #+#             */
/*   Updated: 2021/03/04 19:08:09 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

/*
**	Crée une nouvelle liste en y mettant les chaines de caracteres pointées
**	par les éléments tableau strs.
*/

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*list;
	t_list	*begin;

	if (!size)
		return (NULL);
	list = ft_create_elem(strs[--size]);
	begin = list;
	while (size)
	{
		list->next = ft_create_elem(strs[--size]);
		list = list->next;
	}
	return (begin);
}

/*
**	Same but ordered list, may be usefull
**
**	t_list	*ft_list_push_strs(int size, char **strs)
**	{
**	t_list	*list;
**	t_list	*begin;
**	int		i;
**
**	if (!size)
**		return (NULL);
**	list = ft_create_elem(strs[0]);
**	begin = list;
**	i = 1;
**	while (i < size)
**	{
**		list->next = ft_create_elem(strs[i]);
**		list = list->next;
**		i++;
**	}
**	return (begin);
**}
*/
