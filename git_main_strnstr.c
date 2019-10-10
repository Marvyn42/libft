/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   git_main_strnstr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 11:45:16 by mamaquig          #+#    #+#             */
/*   Updated: 2019/10/10 11:45:19 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main()
{
	char str[] = "Salut ca va";
	char str2[] = "ca";
	size_t len = 8;
	printf("%s\n", ft_strnstr(str, str2, len));
	printf("%s\n", strnstr(str, str2, len));
	return (0);
}
