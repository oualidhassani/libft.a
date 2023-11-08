/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:25:22 by ohassani          #+#    #+#             */
/*   Updated: 2023/11/02 16:25:25 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *ptr;
    ptr = (const unsigned char *)s;
    while (n--> 0)
    {
        if (*ptr == c)
            return(void *)ptr;
        ptr++;
    }
    return(0);
}
/*int main ()
{
    char s[] = "hello world";
    char c = 'w';

   printf("%p", ft_memchr(s, c, 7));
}*/
