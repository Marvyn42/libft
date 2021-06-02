/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <mamaquig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 23:18:49 by agautier          #+#    #+#             */
/*   Updated: 2021/06/02 15:09:43 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Renvoie 1 si le nombre est premier et 0 si le nombre ne l’est pas
*/
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb && i < 46341)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
