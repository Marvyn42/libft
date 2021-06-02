/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <mamaquig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:56:17 by agautier          #+#    #+#             */
/*   Updated: 2021/06/02 14:28:08 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	man memcpy
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	if (!dst && !src)
		return (0);
	d = dst;
	s = src;
	i = 0;
	while (i < n && (d || s))
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
