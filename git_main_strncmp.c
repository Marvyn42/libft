/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   git_main_strncmp.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 19:04:26 by mamaquig          #+#    #+#             */
/*   Updated: 2019/10/11 14:33:10 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		main(void)
{
	char s1[] = "bonjour";
	char s2[] = "salut";
	size_t n = 0;
	printf("	strncmp :\n%d\n", strncmp(s1, s2, n));
	printf("	ft_strncmp :\n%d\n", ft_strncmp(s1, s2, n));
	return (0);
}
