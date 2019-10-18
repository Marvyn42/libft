/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 12:00:20 by mamaquig          #+#    #+#             */
/*   Updated: 2019/10/17 12:33:20 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;
	size_t i1;
	size_t i2;

	i1 = 0;
	i2 = 0;
	str = malloc(sizeof(char) * len);
	if (str == NULL || len == 0)
		return (NULL);
	while (i1 < start - 1)
		i1++;
	while (i2 < len - 1 && *s)
	{
		str[i2] = s[i1];
		i2++;
		i1++;
	}
	str[i2] = '\0';
	return (str);
}
