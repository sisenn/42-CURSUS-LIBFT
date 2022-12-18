/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisen <sisen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 04:13:19 by sisen             #+#    #+#             */
/*   Updated: 2022/12/18 12:45:55 by sisen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char ch;
    
    ch = (unsigned char)c;
    if (!n)
        return (0);
    while(n--)
    {
        if(*(const unsigned char *)s == ch)
            return((unsigned char *)s);
        s++;
    }
    return (0);
}

/*int main()
{
    char s[] = "sinemsen";
    printf("%s", ft_memchr(s, 'e', 0));
}*/