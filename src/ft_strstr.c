/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <mamaquig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:23:12 by agautier          #+#    #+#             */
/*   Updated: 2021/06/02 15:29:48 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Reproduit à l’identique le fonctionnement de la fonction strstr
**	(man strstr).
*/

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i] == to_find[j] && to_find[j] && str[i])
		{
			i++;
			j++;
		}
		if (j > 0 && j == (int)ft_strlen(to_find))
			return (&str[i - j]);
		else
			i -= j;
		i++;
	}
	return (0);
}
