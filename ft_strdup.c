/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisen <sisen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:21:13 by sisen             #+#    #+#             */
/*   Updated: 2022/12/24 04:05:16 by sisen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
    char *str;
    size_t i;

    i = ft_strlen(s1) + 1;
    str = (char *)malloc(i * 1);
    if (!str)
        return (0);
    ft_memcpy(str,s1,i);
        return (str);
    return (0);
}
/*
*int main()
*{
*    char str1[] = "sinemsen";
*    char *str2;
*    str2 = ft_strdup(str1);
*   printf("%s", ft_strdup(str2));
*}
*/