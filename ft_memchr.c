/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:16:04 by mamaquig          #+#    #+#             */
/*   Updated: 2019/10/11 18:40:51 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	char *str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if (*str == c)
			return (str);
		str++;
		i++;
	}
	return (0);
}
