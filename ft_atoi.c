/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:35:02 by ohassani          #+#    #+#             */
/*   Updated: 2023/11/10 20:59:09 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_atoi(const char *str)
{
    int i = 0;
    int res = 0;
    int sign = 1;
    if((str[i] > 8 && str[i] < 14) || str[i] == 32)
    {
        i++;
    }
    if(str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (str[i] =='+')
    i++;
    while (str[i] > 47 && str[i] < 58)
    {
        res = (res * 10) + str[i] - 48;
        i++;
    }
    return (res * sign);
}

int main ()
{
    char d[] = "-2147483648";
    printf("%d\n", atoi(d));
    printf("%d", ft_atoi(d));
}
