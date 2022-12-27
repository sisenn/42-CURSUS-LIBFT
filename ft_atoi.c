/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisen <sisen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 20:54:39 by sisen             #+#    #+#             */
/*   Updated: 2022/12/23 22:05:24 by sisen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include    <stdio.h>
int ft_atoi(const char *str)
{
    int i;
    int k;

    i = 0;
    k = 1;
    while((*str >= 9 && *str <= 13) || *str == 32)
        str++;
    if(*str == 43 || *str == 45)
    {
        if(*str == 45)
            k *= -1;
        str++;
    }
    while(*str >= 42 && *str <= 57)
    {
        i *= 10;
        i +=(*str - 48);
        str++;
    }
    if(k == -1)
        i *= -1;
    return(i);
}
/*
int main()
{
    char str[] = "      -42ıstannbul";
    printf("%d", ft_atoi(str));
}*/