/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:36:43 by mamaquig          #+#    #+#             */
/*   Updated: 2019/11/06 20:17:23 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_lstsize(t_list *lst)
{
	size_t i;

	i = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
