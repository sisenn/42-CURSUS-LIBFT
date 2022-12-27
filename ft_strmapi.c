/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisen <sisen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 12:21:44 by sisen             #+#    #+#             */
/*   Updated: 2022/12/27 12:39:05 by sisen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    if(!s || !f)
        return(0);
    char *a;
    int i;
    i = 0;

    a = malloc((ft_strlen(s) + 1) * sizeof(char));
    if(!a)
        return(0);
    while(s[i])
    {
        a[i] = f(s[i]);
        i ++;
    }
    a[i] = '\0';
    return(a);
}