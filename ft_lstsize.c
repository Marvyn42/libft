/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:36:43 by mamaquig          #+#    #+#             */
/*   Updated: 2019/11/04 17:54:36 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_lstsize(t_list *lst)
{
	size_t i;

	i = 1;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}