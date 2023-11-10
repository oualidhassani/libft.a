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
    size_t i = 0;
    size_t j;


    if (little == NULL)
        return (char *)big;
    j =  ft_strlen(little);
    while (i < len && big[i] != '\0')
    {
        if (little[0] == big[i] && ft_strncmp(&big[i], little, j) == 0)
            return (char *)&big[i];
        i++;
    }
    return(NULL);
}

//  int main ()
//  {
//   char d[] = "we gona make it for real";
//   char s[] = "ma";
//   char *str = ft_strnstr(d, s, 19);
//   printf("%s\n", str);
//  }