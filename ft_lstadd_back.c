/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:52:16 by mamaquig          #+#    #+#             */
/*   Updated: 2019/11/04 17:44:15 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (new)
	{
		while ((*alst)->next)
			*alst = (*alst)->next;
		(*alst)->next = new;
		new->next = NULL;
	}
}
