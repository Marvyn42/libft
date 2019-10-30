/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 12:00:20 by mamaquig          #+#    #+#             */
/*   Updated: 2019/10/30 14:49:33 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	if (len == 0 || start > ft_strlen(s))
		return (ft_strdup(""));
	if (!(str = malloc(sizeof(char) * len + 1)))
		return (NULL);
	i = ft_strlcpy(str, s + start, len + 1);
	return (str);
}
