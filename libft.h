/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:19:31 by timschmi          #+#    #+#             */
/*   Updated: 2024/03/11 14:01:31 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#ifndef LIBFT_H
#define LIBFT_H

extern size_t	ft_strlen(const char *str);
extern int	ft_atoi(char *str);
extern void	ft_bzero(void *s, unsigned int n);
extern void	*ft_calloc(size_t num, size_t size);
extern int	ft_isalnum(char *str);
extern int	ft_isascii(int c);
extern void *ft_memchr(const void *buf, int c, size_t count);
extern int ft_memcmp(const void *buffer, const void *buffer2, size_t count);
extern void	*ft_memcpy(void *dest, const void *src, unsigned int count);
extern void	*ft_memmove(void *dest, const void *src, unsigned int count);
extern void	*ft_memset(void *dest, int c, unsigned int count);
extern int	ft_str_is_alpha(char *str);
extern int	ft_str_is_numeric(char *str);
extern int	ft_str_is_printable(char *str);
extern char *ft_strchr(const char *str, int c);
extern char	*ft_strdup(char *src);
extern size_t ft_strlcat(char *dest, const char *source, size_t size);
extern unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
extern char	*ft_strlowcase(char *str);
extern int	ft_strncmp(char *s1, char *s2, unsigned int n);
extern char	*ft_strnstr(const char *str, const char *find, size_t count);
extern char	*ft_strupcase(char *str);

#endif