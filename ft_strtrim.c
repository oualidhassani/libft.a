/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:29:39 by ohassani          #+#    #+#             */
/*   Updated: 2023/11/08 20:08:31 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 char  *ft_strncpy(char *dest, const char *src, size_t n)
{
    size_t i = 0;
    i = 0;
    while (src[i] != '\0' && i < n)
    {
        dest[i] = src [i];
    i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}
char *ft_strtrim(char const *s1, char const *set)
{
    size_t i = 0;
    size_t len = ft_strlen(s1) - 1;
    size_t diffrence;
    char *result ;
    
    while(s1 && ft_strchr(set, s1[i]))
    i++;
    while (len >= 0 && ft_strchr(set, s1[len]))
    len--;
    diffrence = len - i;
    result = (char *)malloc(diffrence *sizeof(char) + 1);
    if(result == NULL)
    return(NULL);
    ft_strncpy(result, s1 + i, diffrence + 1);
    return(result);
}

// int main ()
// {
//     char d[] = "   *hello*";
//     char s[] = " *";
//     printf("%s", ft_strtrim(d, s));
// }
