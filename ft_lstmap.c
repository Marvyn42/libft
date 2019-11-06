/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 11:25:22 by mamaquig          #+#    #+#             */
/*   Updated: 2019/11/06 19:53:33 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *nlist;
	t_list *tmp;

	nlist = lst;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		if (!(tmp = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&nlist, &del);
			return (NULL);
		}
		ft_lstadd_back(&nlist, tmp);
		lst = lst->next;
	}
	return (nlist);
}
