/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   git_main_memset.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 16:01:16 by mamaquig          #+#    #+#             */
/*   Updated: 2019/10/08 16:01:24 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(void)
{
    // Test avec un tableau de int
    int t[] = {14578, 1458758, 1421454, 14254585};
    ft_memset(t, 0, 3*sizeof(t[0]));

    int i = 0;
    for(i = 0; i < 4; i++)
    {
        printf("%d\n", t[i]);
    }

    return(0);;
}