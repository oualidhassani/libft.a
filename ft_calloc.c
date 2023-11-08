/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:29:58 by ohassani          #+#    #+#             */
/*   Updated: 2023/11/08 20:44:54 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    size_t i = 0; 
    size_t totalsize = nmemb * size;
    void *ptr = malloc(totalsize);
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

/*int main ()
{
    char *str = "oualid";
    printf("%s\n", (char *)ft_calloc(5, sizeof(char)));
    printf("%s", (char *)calloc(5, sizeof(char)));
}*/