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

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!big && !little)
		return (NULL);
	if (little == big)
		return ((char *)big);
	while (big[i] != '\0')
	{
		j = 0;
		while (big[i + j] && little[j] && big[i + j] == little[j] && i
			+ j < len)
			j++;
		if (little[j] == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
// #include	<string.h
//  int main ()
//  {
//   char d[] = "lorem ipsum dolor sit amet";
//   char s[] = "dolor";
//   char *str = ft_strnstr(d, s, 17);
//   printf("%s\n", str);
//   char *str1 = strnstr(d, s, 17);
//   printf("%s\n", str1);
//  }
