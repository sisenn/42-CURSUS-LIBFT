/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisen <sisen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 03:09:44 by sisen             #+#    #+#             */
/*   Updated: 2022/12/24 03:54:23 by sisen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
void ft_putnbr_fd(int n, int fd)
{
    if(n < 0)
    {
        if(n == -2147483648)
        {
            write(fd, "-2147483648", 11);
        }
        ft_putchar_fd('-', fd);
        n = -n;
    }
    if(n >= 10)
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putnbr_fd(n % 10, fd);
    }
    if(n < 10)
    {
        ft_putchar_fd(n + '0', fd);
    }
}
int main()
{
    int q = open("doo.txt", O_RDWR | O_CREAT, 0777);
    int w = open("ret.txt", O_RDWR | O_CREAT, 0777);
    ft_putnbr_fd(-53, w);
    printf("%d", w);
}