/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisen <sisen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 04:42:33 by sisen             #+#    #+#             */
/*   Updated: 2022/12/18 04:43:49 by sisen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void *ft_memcpy (void *dest, const void *src, size_t n)
{
    unsigned char *d;
    unsigned char *s;

    d = (unsigned char *) dest;
    s = (unsigned char *) src;
    if (!d && !s)
        return (0);
    while(n--)
    {
        *d = *s;
        d++;
        s++;
    }
    return ((unsigned char *)dest);
}
/*
int main(void)
{
    char d [] = "mustafa";
    char c [] = "sinem";
    ft_memcpy(d, c, 4);
    printf("%s", d);
}*/