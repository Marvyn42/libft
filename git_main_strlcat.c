/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   git_main_strlcat.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 18:48:59 by mamaquig          #+#    #+#             */
/*   Updated: 2019/10/14 18:49:24 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		main(void)
{
	char dst[] = "bonjour";
	char src[] = "s";
	size_t dstsize = 7;
	printf("ft_strlcat :\n%zu, ", ft_strlcat(dst, src, dstsize));
	printf("%s\n", dst);
	printf("strlcat :\n%lu, ", strlcat(dst, src, dstsize));
	printf("%s\n", dst);
	return (0);
}
