/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisen <sisen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 12:01:40 by sisen             #+#    #+#             */
/*   Updated: 2022/12/28 01:52:31 by sisen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    i = 0;

    if(dstsize > 0)
    {
        while(src[i] && i < dstsize - 1)
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return (ft_strlen(src));
}
/*
int main()
{
    char a[] = "mucahit";
    char b[] = "sinem";
    printf("%zu", ft_strlcpy(a, b, 6));
}*/
