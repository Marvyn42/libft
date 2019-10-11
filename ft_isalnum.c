/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:30:10 by mamaquig          #+#    #+#             */
/*   Updated: 2019/10/11 18:39:28 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_isalnum(int c)
{
	if (c >= '0' && <= '9' || c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
		return(1);
	else
		return(0);
}
