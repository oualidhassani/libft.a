/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:30:34 by ohassani          #+#    #+#             */
/*   Updated: 2023/11/06 21:30:35 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char *ft_strchr(const char *s, int c)
{
    int i;
    i = 0;
    while(s[i])
    {
        if (s[i] == c)
            return((char *) &s[i]);
        i++;   
    }
    return(NULL);
}

/*int main ()
{
    char d[] = "oualid";
    printf("%s\n", ft_strchr(d, 'l'));
    printf("%s\n", strchr(d, 'l'));
}*/