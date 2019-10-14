/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   git_main_strlcpy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 15:45:10 by mamaquig          #+#    #+#             */
/*   Updated: 2019/10/14 15:45:13 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		main(void)
{
	char s[] = "bonjour";
	char ss[] = "salut";
	size_t i = 6;
	printf("ft_strlcpy :\n%lu\n", ft_strlcpy(s, ss, i));
	printf("strlcpy :\n%lu\n", strlcpy(s, ss, i));
	return (0);
}
