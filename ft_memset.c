/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:37:52 by ohassani          #+#    #+#             */
/*   Updated: 2023/11/13 15:26:28 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *str, int c, size_t len)
{
	size_t			i;
	unsigned char	*pointer;

	i = 0;
	pointer = (unsigned char *)str;
	while (i < len)
	{
		pointer[i] = c;
		i++;
	}
	return (pointer);
}
// int main () {
// 	char str[] = "oualid pool";

// 	printf("%s\n", (char *)ft_memset(str, 'c', 12));
// 	printf("%s\n", (char *)memset(str, 'c', 12));
// }
