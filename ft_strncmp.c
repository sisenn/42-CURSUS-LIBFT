/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisen <sisen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 03:10:36 by sisen             #+#    #+#             */
/*   Updated: 2022/12/18 04:09:30 by sisen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    while(n-- && (*s1 || *s2))
    {
        if(*s1 != *s2)
            return(*(unsigned char *)s1 - *(unsigned char *)s2);
        s1++;
        s2++;
    }
    return(0);
}
/*
int main()
{
    const char s1[] = "sinem";
    const char s2[] = "sinema";
    printf("%d", ft_strncmp(s1, s2, 8));
}*/