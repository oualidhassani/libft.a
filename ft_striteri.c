/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 21:00:23 by ohassani          #+#    #+#             */
/*   Updated: 2023/11/10 21:00:26 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    size_t i = 0;
    if(s == NULL || f == NULL)
    return ;
    while(s[i])
    {
        f(i, &s[i]);
        i++;
    }
}

void ft_custom(unsigned int i, char* c) 
{
    printf("index ; %d , char ; %c\n",i,*c);
}
int main()
{
        ft_striteri("oualid",ft_custom);
}