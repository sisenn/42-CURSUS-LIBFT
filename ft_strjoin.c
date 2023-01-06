/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisen <sisen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 22:18:12 by sisen             #+#    #+#             */
/*   Updated: 2023/01/03 21:34:25 by sisen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (0);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	new_str = (char *)ft_calloc((i + j + 1), sizeof(char));
	if (!new_str)
		return (0);
	ft_memcpy(new_str, s1, i);
	ft_memcpy(new_str + i, s2, j);
	return (new_str);
}
