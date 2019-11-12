/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 14:01:25 by mamaquig          #+#    #+#             */
/*   Updated: 2019/11/12 13:10:42 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	size_t	start;
	size_t	end;
	size_t	size;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	while (ft_strchr((char *)set, s1[start]) && s1[start])
		start++;
	while (ft_strchr((char *)set, s1[end - 1]) && end > start)
		end--;
	if (end == start)
		return (ft_strdup(""));
	if (!(new_str = malloc(sizeof(char) * (end - start) + 1)))
		return (NULL);
	size = -1;
	while (start < end)
	{
		new_str[++size] = s1[start];
		start++;
	}
	new_str[size + 1] = '\0';
	return (new_str);
}
