/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:31:36 by ohassani          #+#    #+#             */
/*   Updated: 2023/11/10 21:01:47 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t len = ft_strlen(s) - 1;
    while (s[len])
    {
        if(s[len] == c)
        return((char *)(&s[len]));
        len--;
    }
    return(0);
}

// int main ()
// {
//     char d[] = "oualid";
//     printf("%s\n",ft_strrchr(d, 'u'));
//     printf("%s",strrchr(d, 'u'));
// }