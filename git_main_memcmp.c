/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   git_main_memcmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:17:33 by mamaquig          #+#    #+#             */
/*   Updated: 2019/10/10 17:17:35 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		main(void)
{
	char s1[] = "salut";
	char s2[] = "salut";
	size_t n = 6;
	printf("memcmp :\n%d\n", memcmp(s1, s2, n));
	printf("ft_memcmp :\n%d\n", ft_memcmp(s1, s2, n));
	return (0);
}
