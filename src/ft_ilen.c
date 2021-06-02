/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilen.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <mamaquig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 15:28:51 by agautier          #+#    #+#             */
/*   Updated: 2021/06/02 15:28:35 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Compte les digits d'un nombre (le - n'est pas compté).
*/
int	ft_ilen(int n)
{
	int	len;

	len = 1;
	while (n > 9 || n < -9)
	{
		len++;
		n /= 10;
	}
	return (len);
}
