/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 19:22:56 by mamaquig          #+#    #+#             */
/*   Updated: 2019/10/14 19:23:03 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t		ft_strnlen(const char *s, size_t maxlen)
{
	const char* str;

	str = s;
	while (*str && maxlen != 0)
	{
		str++;
		maxlen--;
	}
	return (str - s);
}
