/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:24:37 by ohassani          #+#    #+#             */
/*   Updated: 2023/11/08 20:06:16 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_isdigit(int c)
{
	char unsigned ci;
	ci = (char unsigned)ci;
	if (c > 47 && c < 58)
		return(1);
	else
		return(0);
}