/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <mamaquig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 22:29:13 by agautier          #+#    #+#             */
/*   Updated: 2021/06/02 15:23:22 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Renvoie une puissance d’un nombre.
*/

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		result = nb * ft_recursive_power(nb, power - 1);
	return (result);
}
