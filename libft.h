/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisen <sisen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:32:29 by sisen             #+#    #+#             */
/*   Updated: 2022/12/24 02:52:18 by sisen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H


#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_isdigit (int s);
int ft_isalpha(int c);
int ft_isalnum( int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t ft_strlen(const char *str);
void    *ft_memset(void *b, int c, size_t len);
void    ft_bzero(void *s, size_t n);
int     ft_toupper(int  c);
int     ft_tolower(int c);
char    *ft_strchr(const char*s, int c);
char    *ft_strrchr(const char *s, int c);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
void *ft_memcpy (void *dest, const void *src, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *ptr1, const void *ptr2, size_t n);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
char *ft_strdup(const char *s1);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
void    *ft_calloc(size_t c, size_t s);
void ft_putstr_fd(char *s, int fd);
void ft_putchar_fd(char c, int fd);

#endif