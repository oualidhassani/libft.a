/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:30:18 by ohassani          #+#    #+#             */
/*   Updated: 2023/11/06 21:30:19 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *dtr;
	const unsigned char *str;
	
	dtr = (unsigned char *)dst;
	str = (const unsigned char *)src;
	while (n > 0)
	{
		dtr[n - 1] = str[n - 1];
		n--;
	}
	return (dtr);
}


// #include <string.h>
// int main()
// {
// 	char p[] = "testing";
// 	char q[] = "testing";
// 	ft_memcpy(p+2, p, 3);
// 	memcpy(q+2, q, 3);
// 	printf("%s\n%s\n",p, q);
// }