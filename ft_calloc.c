/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisen <sisen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:09:41 by sisen             #+#    #+#             */
/*   Updated: 2022/12/23 22:05:51 by sisen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

void    *ft_calloc(size_t c, size_t s)
{
    void    *str;

    str = malloc(c * s);
    if (!str)
        return (str);
    ft_bzero(str, (c * s));
        return (str);
}
/*
int main()
{
    int *a;
    a = malloc(3 * sizeof(int));
    a[0] = 3;
    a[1] = 4;
    a[2] = 7;
    printf("%d\n", a[0]);
    printf("%d\n", a[1]);
    printf("%d\n", a[2]);
    a = calloc(3, sizeof(int));
    printf("%d\n", a[0]);
    printf("%d\n", a[1]);
    printf("%d\n", a[2]);
}*/