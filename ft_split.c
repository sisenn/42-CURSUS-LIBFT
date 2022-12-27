/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisen <sisen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 13:17:21 by sisen             #+#    #+#             */
/*   Updated: 2022/12/27 13:35:28 by sisen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int total_string(char const *s, char c)
{
    int i;

    i = 0;
    while(*s)
    {
        while(*s== c && *s)
            s++;
        if(*s == '\0')
            return(i);
        while(*s != c && *s)
            s++;
        i++;
    }
    return(i);
}
static int total_char(char const*s, char c)
{
    int i;
    
    i = 0;
    while(*s != c && *s)
    {
        s++;
        i++;
    }
    return(i);
}
char **ft_split(char const *s, char c)
{
    int x;
    int j;
    int i;
    char **a;

    if(!s)
        return(NULL);
    x = 0;
    j = total_string(s,c);
    a = ft_calloc(j, sizeof(char *) + 1);
    if(!a)
        return(0);
    while(*s)
    {
        while(*s && *s == c)
            s++;
        if(*s == '\0')
            break
        i = total_char(s, c);
        a[x++] = ft_substr(s, 0, 1);
        while(*s != c && *s)
            s++;
    }
    a[x] = NULL;
    return(a); 
    
    }



}