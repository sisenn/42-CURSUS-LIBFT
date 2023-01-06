/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisen <sisen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 04:13:19 by sisen             #+#    #+#             */
/*   Updated: 2023/01/03 13:27:59 by sisen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	if (!n)
		return (0);
	while (n--)
	{
		if (*(unsigned char *)s == ch)
			return ((unsigned char *)s);
		s++;
	}
	return (0);
}
