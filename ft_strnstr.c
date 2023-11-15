/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:31:32 by ohassani          #+#    #+#             */
/*   Updated: 2023/11/10 21:10:01 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"
 
char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    i = 0;
    size_t j;

    j =  ft_strlen(little);
    if (little[0] == '\0')
        return ((char *)&big[i]);
    while (i < len && big[i] != '\0')
    {
        if (little[0] == big[i] && ft_strncmp(&big[i], little, j) == 0)
            return (char *)&big[i];
        i++;
    }
    return(NULL);
}
// #include	<string.h>

//  int main ()
//  {
//   char d[] = "lorem ipsum dolor sit amet";
//   char s[] = "";
//   char *str = ft_strnstr(d, s, 10);
//   printf("%s\n", str);
//   char *str1 = strnstr(d, s, 10);
//   printf("%s\n", str1);
//  }
 