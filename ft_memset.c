/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 12:30:45 by sisen             #+#    #+#             */
/*   Updated: 2022/12/07 16:28:33 by sisen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *str;
	size_t i ;

	i = 0;

	str = (unsigned char *)b;
   while (i < len)
   {
	   str[i] = (unsigned char)c;
	   i++;
   }
   return (b);
}
