/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   git_main_strlcpy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 15:45:10 by mamaquig          #+#    #+#             */
/*   Updated: 2019/10/14 17:22:44 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		main(void)
{
	char dst[] = "bonjour";
	char src[] = "salut";
	size_t srcsize = 3;
	printf("ft_strlcpy :\n%lu, ", ft_strlcpy(dst, src, srcsize));
	printf("%s\n", dst);
	printf("strlcpy :\n%lu, ", strlcpy(dst, src, srcsize));
	printf("%s\n", dst);
	return (0);
}