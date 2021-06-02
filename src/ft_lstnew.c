/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <mamaquig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 16:02:47 by agautier          #+#    #+#             */
/*   Updated: 2021/06/02 16:31:33 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Alloue (avec malloc(3)) et renvoie un nouvel élément.
**	la variable content est initialisée àl’aide de la valeur du paramètre
**	content.
**	La variable ’next’ est initialisée à NULL.
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = malloc((sizeof(content) + sizeof(t_list *)));
	if (!ptr)
		return (0);
	ptr->content = content;
	ptr->next = 0;
	return (ptr);
}
