/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <mamaquig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 19:51:51 by agautier          #+#    #+#             */
/*   Updated: 2021/06/02 15:29:35 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Renvoie 1 si la chaîne passée en paramètre ne contient quedes chiffres et
**	renvoie 0 si la chaîne passée en paramètre contient d’autres types de
**	caractères.
*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
