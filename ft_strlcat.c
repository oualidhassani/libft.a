/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:30:46 by ohassani          #+#    #+#             */
/*   Updated: 2023/11/10 21:00:32 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i = 0;
    size_t len = ft_strlen(dst) + 1;
    if(dst == NULL || src == NULL)
    return (0);
    while (len < size - 1 && src[i])
    {
        dst[len] = src[i];
        len++;
        i++;
    }
    dst[i] = '\0';
    return len + ft_strlen(src);
}

int main ()
{
    char s[] = "id";
    char d[7] = "oual";
    printf("%zu\n",ft_strlcat(s, d, 2)); 
    printf("%s\n", s);
    printf("%s", d);
}