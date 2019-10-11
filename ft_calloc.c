/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 13:48:19 by mamaquig          #+#    #+#             */
/*   Updated: 2019/10/11 15:55:23 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc(size_t count, size_t size)
{
	void	*dst;
	size_t	total;

	total = count * size;
	dst = malloc(sizeof(total));
	if (dst == NULL || count == 0 || size == 0)
		return (NULL);
	bzero(dst, total);
	return (dst);
}
