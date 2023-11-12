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
    if(size == 0 || nmemb == 0)
        return(ft_strdup(""));
     if(nmemb > SIZE_MAX / size)
        return(NULL);
    void *ptr;
    ptr = malloc(nmemb * size);
    
    if(!ptr)
        return(0);
    else
        ft_bzero(ptr, nmemb * size);
    return(ptr);
}

int main()
{
    char *str = ft_calloc(0, 0);
    printf("%s",str);
}