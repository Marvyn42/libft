/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   git_ft_strrchr2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:04:09 by mamaquig          #+#    #+#             */
/*   Updated: 2019/10/09 18:04:11 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char    *ft_strrchr(const char *s, int c)
{
    const char *p;
    int i1;
    int i2;

    i1 = 0;
    i2 = 0;
    p = s;
    while (*s != '\0')
    {
      s++;
      i2++;
    }
    while (i1 != i2)
    {
      if (*s == c)
        return ((char *)s);
      s--;
      i2--;
    }
    return (0);
}

int main()
{
    const char s[] = "us eut nougat";
    int c = 117;
    printf("la mienne: %s\n", ft_strrchr(s, c));
    printf("la vraie:  %s\n", strrchr(s, c));
    return (0);
}
