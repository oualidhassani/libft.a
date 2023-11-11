/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:29:58 by ohassani          #+#    #+#             */
/*   Updated: 2023/11/11 19:43:58 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
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
    char *str = calloc(-2, -2);
    printf("%s",str);
}