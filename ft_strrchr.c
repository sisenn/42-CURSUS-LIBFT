/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisen <sisen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 02:10:22 by sisen             #+#    #+#             */
/*   Updated: 2022/12/18 03:45:47 by sisen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    i = ft_strlen(s);
    if((unsigned char)c == '\0')
        return((char *)s + i);
    while(i >= 0)
    {
        if(*((char *)s + i) == (unsigned char)c)
            return((char *)s + i);
        i--;
    }
    return(0);
}
/*
int main()
{
    char s[] = "sinem.sen.rumeysa";
    printf("%s", ft_strrchr(s, 'r'));
}*/