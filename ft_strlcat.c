/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marierau <marierau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:13:55 by marierau          #+#    #+#             */
/*   Updated: 2023/04/27 19:33:08 by marierau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	i2;
	size_t	i3;
	size_t	res;

	i = 0;
	i2 = 0;
	res = 0;
	while (src[res] != '\0')
		res++;
	while (dst[i] != '\0')
		i++;
	i3 = i;
	if (dstsize > res + i)
		dstsize = res + i + 1;
	while (src[i2] != '\0' && i < dstsize - 1 && dstsize > 0)
		dst[i++] = src[i2++];
	dst[i] = '\0';
	if (dstsize + res > res + i3)
		return (res + i3);
	return (res + dstsize);
}