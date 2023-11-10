/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:30:52 by ohassani          #+#    #+#             */
/*   Updated: 2023/11/10 21:00:35 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i = 0;
    if(dst == NULL || src == NULL)
    return(0);
    while (size - 1 > i && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return ft_strlen(src);
}

// int main ()
// {
//     char s[] = "ouaaaa";
//     char d[10] = "liddddd";
//     printf("%zu",ft_strlcpy(s, d, 7));
// }