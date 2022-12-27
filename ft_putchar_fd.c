/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisen <sisen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 02:14:24 by sisen             #+#    #+#             */
/*   Updated: 2022/12/24 02:50:33 by sisen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

/*
int main()
{
    int x = open("foo.txt", O_RDWR | O_CREAT, 0777);
    int y = open("zoo.txt", O_RDWR | O_CREAT, 0777);
    int z = open("qoo.txt", O_RDWR | O_CREAT, 0777); 
    close(x);
    ft_putchar_fd('y', x);
}*/