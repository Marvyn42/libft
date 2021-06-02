/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <mamaquig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 14:32:59 by mamaquig          #+#    #+#             */
/*   Updated: 2021/06/02 14:33:03 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Alloue (avec malloc(3)) et retourne une nouvelle chaine, résultat de la
**	concaténation de s1 et s2.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	size_t	tot;

	if (!s1 || !s2)
		return (NULL);
	tot = ft_strlen(s1) + ft_strlen(s2) + 1;
	dst = malloc(sizeof(char) * tot);
	if (!dst)
		return (NULL);
	dst = ft_memcpy(dst, s1, ft_strlen(s1) + 1);
	ft_strlcat(dst, s2, tot);
	return (dst);
}
