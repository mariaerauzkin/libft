/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marierau <marierau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:50:13 by marierau          #+#    #+#             */
/*   Updated: 2023/05/05 11:56:42 by marierau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "libft.h"
# include <stdlib.h>

int		ft_isalpha(int str);
int		ft_isdigit(int str);
int		ft_isalnum(int str);
int		ft_isascii(int str);
int		ft_isprint(int str);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *pos, int c, size_t len);
void	ft_bzero(void *pos, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int		ft_tolower(int str);
int		ft_toupper(int str);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr( const char *str, int c );
int		ft_strncmp(const char *str1, const char *str2, size_t len);
void	*ft_memchr(const void *str, int c, size_t len);
int		ft_memcmp(const void *str1, const void *str2, size_t len);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *sorg);

#endif