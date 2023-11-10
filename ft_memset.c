/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:37:52 by ohassani          #+#    #+#             */
/*   Updated: 2023/11/10 21:00:01 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void *ft_memset(void *str, int c, size_t len)
{
	size_t i;
	i = 0;
	 unsigned char *pointer;
	pointer = (unsigned char *)str;

	while (i < len)
	{
		pointer[i] = c;
		i++;
	}
	return (pointer);
}
/*int main () {
	char str[] = "oualid pool";

	printf("%s\n", (char *)ft_memset(str, 'c', 12));
	printf("%s\n", (char *)memset(str, 'c', 12));
}*/
