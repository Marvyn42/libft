/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 16:19:57 by mamaquig          #+#    #+#             */
/*   Updated: 2019/10/14 19:25:57 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t srclen;
    size_t dstlen;

	dstlen = ft_strnlen(dst, dstsize);
	srclen = strlen(src);
    if (dstlen == dstsize)
		return (dstsize + srclen);
    if (srclen < dstsize - dstlen)
        memcpy(dst + dstlen, src, srclen + 1);
    else
	{
        memcpy(dst + dstlen, src, dstsize - 1);
        dst[dstlen + dstsize - 1] = '\0';
    }
    return (dstlen + srclen);
}
