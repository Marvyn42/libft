/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 14:25:22 by mamaquig          #+#    #+#             */
/*   Updated: 2019/10/17 16:49:12 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	size_t size_s1;
	size_t size_s2;
	size_t i;

	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	i = size_s1 + size_s2 + 1;
	str = malloc(sizeof(char) * i);
	if (str == NULL)
		return (NULL);
	ft_memset(str, 0, i);
	ft_memcpy(str, s1, size_s1);
	while (*str)
		str++;
	ft_memcpy(str, s2, size_s2);
	while (size_s1 > 0)
	{
		str--;
		size_s1--;
	}
	return (str);
}