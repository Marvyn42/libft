/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:07:21 by mamaquig          #+#    #+#             */
/*   Updated: 2019/10/14 13:16:51 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *temp;
	size_t i;

	temp = (char *)src;
	i = 0;
	while (i < len)
	{
		((char *)dst)[i] = temp[i];
		i++;
	}
	return (dst);
}
