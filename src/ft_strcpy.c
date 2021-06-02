/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <mamaquig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 21:49:17 by agautier          #+#    #+#             */
/*   Updated: 2021/06/02 16:28:53 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Reproduit à l’identique le fonctionnement de la fonction strcpy
**	(man strcpy).
*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
