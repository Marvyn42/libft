/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   git_main_calloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 15:51:05 by mamaquig          #+#    #+#             */
/*   Updated: 2019/10/11 15:54:40 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc(size_t count, size_t size);

int		main(void)
{
	size_t i = 6;
	size_t n = 1;
	printf("	calloc :\nAdresse: %p\n", calloc(i, n));
	printf("  ?    : %lu\n", sizeof(calloc(i, n)));
	printf("	ft_calloc :\nAdresse: %p\n", ft_calloc(i, n));
	printf("  ?    : %lu\n", sizeof(ft_calloc(i, n)));
	return (0);
}
