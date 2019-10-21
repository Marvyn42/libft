/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaquig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 14:01:25 by mamaquig          #+#    #+#             */
/*   Updated: 2019/10/21 14:03:42 by mamaquig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t          ft_strlen(const char *s)
{
        int i;

        i = 0;
        while (s[i])
                i++;
        return (i);
}

char    *ft_after_trim(char const *s1, char const *set)
{
        int             i;
        int             j;
        int             mark;
        char    *str;

        i = ft_strlen(s1);
        j = 0;
        if(!(str = malloc(sizeof(char) * i + 1)))
                return (NULL);
        mark = 0;
        i -= 1;
        while (s1[i] && mark == 0)
        {
                while (set[j])
                {
                        if (set[j] == s1[i])
                        {
                                i--;
                                j = 0;
                        }
                        else
                                j++;
                }
                mark = 1;
        }
        j = 0;
        while (j <= i)
        {
                str[j] = s1[j];
                j++;
        }
        str[j] = '\0';
        return (str);
}

char    *ft_before_trim(char const *s1, char const *set)
{
        int             i;
        int             j;
        int             mark;
        char    *str;

        i = 0;
        j = 0;
        mark = ft_strlen(s1);
        if(!(str = malloc(sizeof(char) * mark + 1)))
                return (NULL);
        mark = 0;
        while (s1[i] && mark == 0)
        {
                while (set[j])
                {
                        if (set[j] == s1[i])
                        {
                                i++;
                                j = 0;
                        }
                        else
                                j++;
                }
                mark = 1;
        }
        j = 0;
        while (s1[i])
        {
                str[j] = s1[i];
                i++;
                j++;
        }
        str[j] = '\0';
        return (str);
}

char    *ft_strtrim(char const *s1, char const *set)
{
        int             i;
        char    *newstr;
        char    *dst;
        size_t  size;

        i = 0;
        newstr = ft_before_trim(s1, set);
        newstr = ft_after_trim(newstr, set);
        size = ft_strlen(newstr);
        if(!(dst = malloc(sizeof(char) * size + 1)))
                return (NULL);
        while (i < size)
        {
                dst[i] = newstr[i];
                i++;
        }
        dst[i] = '\0';
        return (dst);
}
