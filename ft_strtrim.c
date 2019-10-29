/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 14:01:25 by mamaquig          #+#    #+#             */
/*   Updated: 2019/10/29 18:09:18 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_in_str(char c, char *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	size_t	start;
	size_t	end;
	size_t	size;

	start = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	end = ft_strlen(s1);
	while (is_in_str(s1[start], (char *)set))
		start++;
	while (is_in_str(s1[end - 1], (char *)set) && end > start)
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
