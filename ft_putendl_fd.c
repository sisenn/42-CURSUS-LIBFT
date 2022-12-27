/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisen <sisen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 02:55:33 by sisen             #+#    #+#             */
/*   Updated: 2022/12/24 03:06:35 by sisen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fcntl.h"
void ft_putendl_fd(char *s, int fd)
{
    int i;
    i = 0;
    
    while(s[i])
    {
        ft_putchar_fd(s[i], fd);
        i++;
    }
    ft_putchar_fd('\n', fd);
}
/*
int main()
{
    char s[] = "sinem";
    int p = open("sak.txt", O_RDWR | O_CREAT, 0777);
    int t = open("gfh.txt", O_RDWR | O_CREAT, 0777);
    ft_putendl_fd(s, 3);
}*/