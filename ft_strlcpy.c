/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 12:50:53 by mamaquig          #+#    #+#             */
/*   Updated: 2019/10/14 17:23:06 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t srcsize;
	size_t len;

	srcsize = ft_strlen(src);
	if (srcsize >= dstsize)
		len = dstsize - 1;
	else
		len = srcsize;
	ft_memcpy(dst, src, len);
	dst[len] = '\0';
	return (srcsize);
}
