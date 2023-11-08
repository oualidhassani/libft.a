/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:25:51 by ohassani          #+#    #+#             */
/*   Updated: 2023/11/02 16:26:03 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
 int ft_memcmp(const void *s1, const void *s2, size_t n)
 {
    const unsigned char *str;
    const unsigned char *ptr;
    str = (const unsigned char *)s1;
    ptr = (const unsigned char *)s2;
    while (n--> 0)
    {
        if (*str != *ptr)
            return(*str - *ptr);  
        str++;
        ptr++;
    }
    return (0);
 }

 int main ()
 {
    char s[] = "oualid";
    char d[] = "ouadid";
    printf("%d\n",ft_memcmp(s, d, 6));
    printf("%d", memcmp(s, d, 6));
 }
