/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:37:17 by ohassani          #+#    #+#             */
/*   Updated: 2023/11/07 17:35:15 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char  (*f)(unsigned int, char))
{
    size_t i;
    i = 0;
    size_t len;
    len = ft_strlen(s);
    char *rslt;
    rslt = (char *)malloc((len + 1)*sizeof(char));
    if(rslt == NULL)
    return(NULL);
    while (s[i] != '\0')
    {
        rslt[i] = f(i, s[i]);
        i++;
    }
    rslt[i] = '\0';
    return(rslt);
}

char ft_custom_mapping_function(unsigned int i, char chara) 
{
    if (i % 2 == 0) 
        return chara;
    return (chara - 32); 
    }

int main ()
{
    char d [] = "dsdsdds";
   char *s = ft_strmapi(d, ft_custom_mapping_function);
   printf("%s\n", d);
   printf("%s", s);
}
