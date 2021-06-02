/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <mamaquig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 23:27:17 by agautier          #+#    #+#             */
/*   Updated: 2021/06/02 16:27:45 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Renvoie le nombre premier immédiatement supérieur ou égal au nombre passé
**	en paramètre.
*/

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb < 2)
		nb = 2;
	i = 0;
	while (!ft_is_prime(nb + i))
		i++;
	return (nb + i);
}
