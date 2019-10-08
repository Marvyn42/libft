/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   git_main_strncmp.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 19:04:26 by mamaquig          #+#    #+#             */
/*   Updated: 2019/10/08 19:04:29 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		main(void)
{
	char str1[] = "abc";
	char str2[] = "abc";
	unsigned int n = 5;
	printf("%d\n", ft_strncmp(str1, str2, n));
	printf("%d\n", strncmp(str1, str2, n));
	return (0);
}
