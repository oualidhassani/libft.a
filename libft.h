/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:08:30 by ohassani          #+#    #+#             */
/*   Updated: 2023/11/09 14:24:52 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
size_t ft_strlen(const char *s);
typedef long unsigned int size_t;
void ft_bzero(void *s, size_t n);
void *ft_memset(void *str, int c, size_t len);
int ft_strncmp(const char *s1, const char *s2, size_t n);
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
char *ft_strchr(const char *s, int c);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
int ft_tolower(int c);
void ft_putchar_fd(char c, int fd);



#endif