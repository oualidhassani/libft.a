/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:30:58 by ohassani          #+#    #+#             */
/*   Updated: 2023/11/10 21:01:27 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    
    size_t i;
    
    i = 0;
    while (n > 0 && s1[i] && s2[i])
    {
        if(s1[i] != s2[i])
           return ((unsigned char )s1[i] - (unsigned char )s2[i]);
        i++;
        n--;
    }
    return(0);
}

//   int main()
// {
//   char s[] = "dffds\200f";   char d[] = "dffdsf\0";
//    printf("%d\n",strncmp(d, s, 6));
//     printf("%d", ft_strncmp(d, s, 6));
// }
