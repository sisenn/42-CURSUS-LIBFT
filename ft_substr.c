/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisen <sisen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 20:37:04 by sisen             #+#    #+#             */
/*   Updated: 2022/12/23 22:09:56 by sisen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;
    size_t i;
    size_t j;
    i = 0;
    j = 0;
    substr = (char *)malloc((len + 1) * sizeof(*s));
    if(!substr)
        return(0);
    if(!s)
        return(0);
    while(s[j])
    {
       while(j >= start && i < len)
        {
            substr[i] = s[j + i];
            i++;
        }
        j++;
    }
    substr[i] = 0;
    return(substr);
}
/*
int main()
{
    char s[] = "sinemsen";
    printf("%s", ft_substr(s, 3, 4));
}*/