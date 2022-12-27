/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisen <sisen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:26:02 by sisen             #+#    #+#             */
/*   Updated: 2022/12/26 19:52:28 by sisen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalpha(int c)
{
	return((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int main()
{
	printf("%d", ft_isalpha('s'));
}
/*
- int isalpha(int c);
- <ctype.h>
- Karakterin alfabetik olup olmadığını test eder
- Alfabetik karakterse 0'dan farklı bir return dönderir, değilse return 0 dönderir.
*/