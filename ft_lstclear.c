/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 15:35:13 by mamaquig          #+#    #+#             */
/*   Updated: 2019/11/05 13:06:22 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *init;
	t_list *tmp;

	init = *lst;
	while (init)
	{
		tmp = init;
		init = init->next;
		ft_lstdelone(tmp, del);
	}
	*lst = NULL;
}
