/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:31:38 by ohassani          #+#    #+#             */
/*   Updated: 2023/11/10 21:01:54 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    int i = 0;
    char *ptr = malloc((len + 1) * sizeof(char));
    if (start < 0 || start >= ft_strlen(s))
    return(NULL);
    if (ptr == NULL)
    return(NULL);
    while (len > i)
    {
        ptr[i] = s[i + start];
        i++;
    }
    ptr[i] = '\0';
    return(ptr);
}

// int main ()
// {
//     char d[] = "oualid"; 
//    printf("%s",ft_substr(d, 6, 8));
// }