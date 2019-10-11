/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:07:21 by mamaquig          #+#    #+#             */
/*   Updated: 2019/10/11 18:41:56 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *temp;
	size_t i;

	temp = (char *)dst;
	i = 0;
	while (i < len)
	{
		temp[i] = ((char *)src)[i];
		i++;
	}
	i = 0;
	while (temp[i])
	{
		((char *)dst)[i] = temp[i];
		i++;
	}
	return (dst);
}
