/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:30:38 by ohassani          #+#    #+#             */
/*   Updated: 2023/11/09 12:12:29 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"
 #include <string.h>
 char *ft_strdup(const char *s)
 {
   size_t i = 0;
    size_t len = ft_strlen(s);
    char *copie =(char *)malloc((len + 1) * sizeof(char));
    if (copie != NULL)
    {
      while(len >= i)
      {
         copie[i] = s[i];
         i++;
      }
      len++;
    }
    copie = '\0';
    return(copie);
 }

//  int main ()
//  {
//    const char s[] = "oualid";
//    printf("%s\n",ft_strdup(s));
//    printf("%s",strdup(s));
//  }