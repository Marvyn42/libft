/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 15:02:13 by mamaquig          #+#    #+#             */
/*   Updated: 2019/11/12 18:21:51 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_error(char **mem, int i)
{
	while (i >= 0)
		free(mem[i--]);
	free(mem);
}

static int		ft_wordcount(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static int		ft_wordsize(char const *str, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

char			**ft_split(char const *s, char c)
{
	char	**mem;
	int		i;
	int		j;
	int		k;
	int		tmp;

	i = -1;
	j = 0;
	tmp = ft_wordcount(s, c);
	if (!s || !(mem = malloc(sizeof(char*) * (tmp + 1))))
		return (NULL);
	while (tmp > ++i)
	{
		k = 0;
		if (!(mem[i] = malloc(sizeof(char) * (ft_wordsize(&s[j], c) + 1))))
		{
			ft_error(mem, i);
			return (NULL);
		}
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			mem[i][k++] = s[j++];
		mem[i][k] = '\0';
	}
	mem[i] = 0;
	return (mem);
}
