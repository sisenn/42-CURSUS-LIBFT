/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisen <sisen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 02:33:00 by sisen             #+#    #+#             */
/*   Updated: 2022/12/24 02:54:41 by sisen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
void ft_putstr_fd(char *s, int fd)
{
    int i;
    i = 0;
    while(s[i])
    {
        ft_putchar_fd(s[i], fd);
        i++;
    }
}
/*
int main()
{
    int y = open("y.txt", O_RDWR | O_CREAT, 0777);
    char s[] = "sinem";
    ft_putstr_fd(s, y);
}*/