/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisen <sisen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 02:24:47 by sisen             #+#    #+#             */
/*   Updated: 2022/12/23 22:06:03 by sisen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"
size_t ft_strlcat(char * dst, const char * src, size_t dstsize)
{
    size_t i;
    size_t j;

    i = ft_strlen(dst);
    j = ft_strlen(src);
    if(!dst && !dstsize)
        return(0);
    if(i >= dstsize)
    {
        i = dstsize;
        return(i + j);
    }
    if( j < dstsize - i)
    {
        ft_memcpy(dst + i, src, j);
        dst[i + j] = '\0';
    }
    else
    {
        ft_memcpy(dst + i,src,dstsize - i -1);
        dst[dstsize - 1] = '0';
    }
    return (i + j);
}
/*
int main()
{
    char dst[] = "mucahit";
    char src[] = "sinem";
    printf("%zu", ft_strlcat(dst, src, 4));
}*/