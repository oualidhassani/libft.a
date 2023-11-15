/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:29:58 by ohassani          #+#    #+#             */
/*   Updated: 2023/11/12 14:37:53 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;
    char *str;
    if(size == 0 || nmemb == 0)
    {
        str = malloc(1);
        str[0] = '\0';
        return((void *)str);
    }
     if(nmemb > SIZE_MAX / size)
        return(NULL);
    ptr = malloc(nmemb * size);
    
    if(!ptr)
        return(NULL);
    else
        ft_bzero(ptr, nmemb * size);
    return(ptr);
}
// #include<stdlib.h>
// int main()
// {
//     char *str = calloc(1, 0);
//     printf("%d\n", *str);
//     printf("%s",str);
// }