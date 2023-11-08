/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:30:43 by ohassani          #+#    #+#             */
/*   Updated: 2023/11/06 21:30:44 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t i = 0;
    size_t len1 = ft_strlen(s1);
    size_t len2 = ft_strlen(s2);
    size_t totalelen = len1 + len2;
    char *concatenated =(char *)malloc((totalelen)*sizeof(char) + 1);
    if(s1 == NULL || s2 == NULL)
    return(NULL);
    else if (concatenated == NULL)
        return(NULL);
        while(len1 > i)
        {
            concatenated[i] = s1[i];
            i++;
        }
        i = 0;
        while (len2 > i)
        {
            concatenated[len1 + i] = s2[i];
            i++;
        }
        concatenated[totalelen] = '\0';
    return(concatenated);
}

int main ()
{
    char d[] ="";
    char s[] = "";
    printf("%s", (char *)ft_strjoin(d, s));
    
}