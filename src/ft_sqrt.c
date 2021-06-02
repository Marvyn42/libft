/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <mamaquig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 22:48:55 by agautier          #+#    #+#             */
/*   Updated: 2021/06/02 16:28:36 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Renvoie la racine carrée entière d’un nombre si elle existe, 0 si la
**	racine carrée n’est pas entière.
*/

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i < 46341)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
