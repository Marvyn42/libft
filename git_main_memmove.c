/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   git_main_memmove.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:13:18 by mamaquig          #+#    #+#             */
/*   Updated: 2019/10/10 16:13:21 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		main(void)
{
	char dest[] = "s";
	char src[] = "bjr";
	size_t len = 2;
	printf("memmove :\n%s\n", memmove(dest, src, len));
	printf("ft_memmove :\n%s\n", ft_memmove(dest, src, len));
	return (0);
}
