/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <mamaquig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 17:27:40 by mamaquig          #+#    #+#             */
/*   Updated: 2021/06/02 16:03:42 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(long nb, char *base)
{
	int				len;
	unsigned long	tmp;
	char			*result;
	unsigned int	baselen;

	baselen = ft_strlen(base);
	tmp = nb;
	len = 1;
	while (tmp / (baselen))
	{
		len++;
		tmp /= baselen;
	}
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = 0;
	while (nb / baselen)
	{
		len--;
		result[len] = base[nb % baselen];
		nb /= baselen;
	}
	len--;
	result[len] = base[nb % baselen];
	return (result);
}
