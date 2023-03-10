/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisen <sisen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 14:35:08 by sisen             #+#    #+#             */
/*   Updated: 2023/01/03 21:34:49 by sisen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

char	*ft_strnstr(const char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!dst && !n)
		return (NULL);
	if ((ft_strlen(src) == 0))
		return ((char *)dst);
	if (ft_strlen(dst) == 0)
		return (0);
	while (i < n)
	{
		while (dst[i + j] == src[j] && (i + j) < n)
		{
			if (src[j + 1] == '\0')
				return ((char *)dst + i);
			j++;
		}
		i++;
	}
	return (0);
}
