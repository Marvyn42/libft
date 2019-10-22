/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 15:02:13 by mamaquig          #+#    #+#             */
/*   Updated: 2019/10/22 13:16:36 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		str_nbr(char *str)
{
	int		i;
	int		cptr;

	i = 1;
	cptr = 1;
	if (str[0] == 0)
		return (0);
	if (str[0] == 7)
		cptr = 0;
	while (str[i])
	{
		if (str[i] != 7 && str[i - 1] == 7)
			cptr++;
		i++;
	}
	return (cptr);
}

int		*char_number(char *str, int str_nbr)
{
	int		i;
	int		j;
	int		*cptr;

	i = 1;
	j = 0;
	if (str_nbr == 0 || !(cptr = (int *)malloc(sizeof(int) * (str_nbr))))
		return (0);
	cptr[0] = 0;
	if (str[0] != 7)
		cptr[0]++;
	while (str[i])
	{
		if (str[i] != 7)
			cptr[j]++;
		if (str[i] == 7 && str[i - 1] != 7)
		{
			j++;
			if (j < str_nbr)
				cptr[j] = 0;
		}
		i++;
	}
	return (cptr);
}

char	*ft_replace_charset(const char *s, char c, int size)
{
	char	*strcpy;
	int		i;

	i = 0;
	strcpy = (char *)malloc(sizeof(char) * (size + 1));
	while (s[i])
	{
		if (s[i] == c)
			strcpy[i] = 7;
		else
			strcpy[i] = s[i];
		i++;
	}
	strcpy[i] = 0;
	return (strcpy);
}

void    ft_copy(char **split, char *str, int strnb)
{
	int             j;
	int             i;
	int             cptr;

	j = 0;
	i = 0;
	cptr = 0;
	if (str[0] == 7)
		cptr = -1;
	while (str[i])
	{
		if (i != 0 && str[i] != 7 && str[i - 1] == 7)
			cptr++;
		if (cptr == strnb)
			break ;
		i++;
	}
	while (str[i] != 7 && str[i] != 0)
	{
		split[strnb][j] = str[i];
		i++;
		j++;
	}
	split[strnb][j] = 0;
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		j;
	int		*c_nb;
	char	**split;
	char	*new_str;

	i = 0;
	while (s[i])
		i++;
	new_str = ft_replace_charset(s, c, i);
	split = malloc(sizeof(*split) * (str_nbr(new_str) + 1));
	c_nb = char_number(new_str, str_nbr(new_str));
	j = 0;
	while (j < str_nbr(new_str))
	{
		split[j] = malloc(sizeof(**split) * (c_nb[j] + 1));
		ft_copy(split, new_str, j);
		j++;
	}
	split[j] = 0;
	return (split);
}
