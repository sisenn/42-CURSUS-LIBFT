/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisen <sisen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 18:37:44 by sisen             #+#    #+#             */
/*   Updated: 2022/12/27 13:41:36 by sisen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strtrim(char const *s1, char const *set)
{
    int len;
    char *a;
    if(s1 || !set)
        return(0);
    while(*s1 && ft_strchr(set, *s1))
        s1++;
    len = ft_strlen(s1);
    while(s1[len - 1] && len && ft_strchr(set, s1[len - 1]))
        len--;
    a = malloc((len + 1) * sizeof(char));
    if(!a)
        return(0);
    ft_memcpy(a, s1, (len));
    a[len] = '\0'
    return(a);
}