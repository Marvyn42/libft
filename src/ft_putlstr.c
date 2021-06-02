/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <mamaquig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 16:22:18 by agautier          #+#    #+#             */
/*   Updated: 2021/06/02 15:30:16 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Imprime les n premiers caracteres d'une chaine sur la sortie standard.
*/

void	ft_putlstr(const char *str, size_t n)
{
	size_t	i;

	i = 0;
	while (str[i] && i < n)
	{
		write(1, &str[i], 1);
		i++;
	}
}
