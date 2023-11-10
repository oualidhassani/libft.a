/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:29:58 by ohassani          #+#    #+#             */
/*   Updated: 2023/11/10 11:25:20 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    size_t i = 0; 
    size_t totalsize = nmemb * size;
    void *ptr = malloc(totalsize);
    if(nmemb < 0 || size < 0)
    return(NULL);
    if(ptr != NULL)
    {
        while (totalsize > i)
        {
            ft_bzero(ptr,totalsize);
            i++;
        }
    }
    return(ptr);
}

int main ()
{
    char *str = "oualid";
    printf("%p\n", ft_calloc(-5,-5));
    printf("%p", calloc(-5, -5));
}