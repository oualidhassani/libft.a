/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:23:52 by ohassani          #+#    #+#             */
/*   Updated: 2023/11/08 20:05:06 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c)
{
	char unsigned ci;
	ci = (char unsigned)ci;
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return(0);
}
