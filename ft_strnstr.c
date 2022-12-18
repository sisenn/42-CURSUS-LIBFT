/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisen <sisen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 14:35:08 by sisen             #+#    #+#             */
/*   Updated: 2022/12/18 17:54:16 by sisen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    if(!haystack && !len)
        return(0);
    if(!needle[0])
        return((char *)haystack);
    while(haystack[i] && i < len)
    {
        if(haystack[i + j]  == needle[j])
            j++;
        if(needle[j] == '\0')
            return((char *)&haystack[i]);

        j = 0;
        i ++;
    }
    return(0);
            
        

}



int main()
{
    const char h[] = "bilgisayar";
    const char n[] = "sayar";
    printf("%s", ft_strnstr(h, n, 9));
}