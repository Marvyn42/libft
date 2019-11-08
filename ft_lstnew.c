/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 19:19:42 by mamaquig          #+#    #+#             */
/*   Updated: 2019/11/08 12:58:56 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list	*list;

	if (!content || !(list = malloc(sizeof(*list))))
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}
