/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 12:16:18 by mamaquig          #+#    #+#             */
/*   Updated: 2019/10/22 17:23:29 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	void *temp;

	temp = ft_memchr(src, c, n);
	if (temp != NULL)
		return (ft_memcpy(dst, src, temp - src + 1));
	else
		ft_memcpy(dst, src, n);
		return (NULL);
/*	size_t i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)src)[i] == c)
		{
			dst++;
			return (dst);
		}
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
		dst++;
	}
	return (NULL);*/
}
