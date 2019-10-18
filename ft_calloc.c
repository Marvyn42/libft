/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 13:48:19 by mamaquig          #+#    #+#             */
/*   Updated: 2019/10/11 18:39:13 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*dst;
	size_t	total;

	total = count * size;
	dst = malloc(sizeof(total));
	if (dst == NULL || count == 0 || size == 0)
		return (NULL);
	memset(dst, 0, total);
	return (dst);
}
