/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisen <sisen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 16:55:44 by sisen             #+#    #+#             */
/*   Updated: 2023/01/03 12:02:52 by sisen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_nlen(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		len++;
	else if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n != 0)
	{	
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*to_return;
	size_t	size;
	size_t	i;

	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = ft_nlen(n);
	to_return = malloc(sizeof (char) * (size + 1));
	if (!to_return)
		return (0);
	to_return [size] = '\0';
	if (n < 0)
	{
		to_return[0] = '-';
		n *= -1;
		i = 1;
	}
	while (i < size--)
	{
		to_return[size] = (n % 10) + 48;
		n /= 10;
	}
	return (to_return);
}
