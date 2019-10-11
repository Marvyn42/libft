/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   git_main_memcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 12:14:52 by mamaquig          #+#    #+#             */
/*   Updated: 2019/10/11 12:14:57 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		main(void)
{
	char str1[] = "Bonjour hello";
	char str2[] = "salut";
	size_t n = 10;
	printf("	memcpy :\n%s\n", memcpy(str1, str2, n));
	printf("	ft_memcpy :\n%s\n\n", ft_memcpy(str1, str2, n));
	return (0);
}
