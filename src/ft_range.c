/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <mamaquig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 21:54:09 by agautier          #+#    #+#             */
/*   Updated: 2021/06/02 16:31:04 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Retourne un tableau d’int.
**	Ce tableau d’int contiendra toutes les valeurs entre min et max.
*/

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;
	int	j;

	if (min >= max)
		return ((int *)0);
	ptr = (int *)malloc(sizeof(int) * (max - min));
	if (!ptr)
		return ((int *)0);
	i = min;
	j = 0;
	while (i < max)
	{
		ptr[j] = i;
		j++;
		i++;
	}
	return (ptr);
}
