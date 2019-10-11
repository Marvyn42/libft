/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   git_main_memccpy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 13:38:45 by mamaquig          #+#    #+#             */
/*   Updated: 2019/10/11 13:39:00 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		main(void)
{
	char str1[] = "testegdbn";
	char str2[] = "saluteh";
	int c = 117;
	size_t n = 7;
	printf("	memccpy :\n%s\n", memccpy(str1, str2, c, n));
	printf("	ft_memccpy :\n%s\n", ft_memccpy(str1, str2, c, n));
	return (0);
}
