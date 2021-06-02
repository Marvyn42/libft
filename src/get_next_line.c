/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <mamaquig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 14:24:47 by mamaquig          #+#    #+#             */
/*   Updated: 2021/06/02 14:57:52 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		get_next_part(char **line, char **str, char **tmp, int nb)
{
	char *test;

	if (!(test = ft_strchr(*str, '\n')))
	{
		test = ft_strchr(*str, '\0');
		nb = 0;
	}
	else
		nb = 1;
	if (!(*line = ft_substr(*str, 0, ft_strlen(*str) - ft_strlen(test))))
	{
		ft_free((void **)str);
		return (-1);
	}
	if (nb == 1)
	{
		*tmp = *str;
		*str = ft_substr(test + 1, 0, ft_strlen(test + 1));
		ft_free((void **)tmp);
	}
	else
		ft_free((void **)str);
	return (nb);
}

int		get_next_line(int fd, char **line)
{
	char		*test;
	char		*tmp;
	static char *str = NULL;
	int			nb;

	tmp = NULL;
	if (!str)
		str = ft_strdup("");
	if (!tmp)
		tmp = calloc(sizeof(char), BUFFER_SIZE + 1);
	if (fd < 0 || !line || read(fd, tmp, 0) == -1)
		return (-1);
	while (!(ft_strchr(str, '\n')) && (nb = read(fd, tmp, BUFFER_SIZE)) > 0)
	{
		tmp[nb] = '\0';
		test = str;
		str = ft_strjoin(str, tmp);
		ft_free((void **)&test);
	}
	ft_free((void **)&tmp);
	nb = get_next_part(line, &str, &tmp, nb);
	return (nb);
}
