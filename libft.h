/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marierau <marierau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:50:13 by marierau          #+#    #+#             */
/*   Updated: 2023/04/27 19:06:52 by marierau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>

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
size_t	ft_strlcat(char *dest, char *src, unsigned int dstsize);
int	    ft_tolower(int char);



#endif