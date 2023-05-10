/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marierau <marierau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:13:55 by marierau          #+#    #+#             */
/*   Updated: 2023/05/10 14:59:33 by marierau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	inddst;
	size_t	indsrc;
	size_t	ind;
	size_t	lensrc;

	inddst = 0;
	indsrc = 0;
	lensrc = ft_strlen(src);
	while (dst[inddst] != '\0')
		inddst++;
	ind = inddst;
	if (dstsize > lensrc + inddst)
		dstsize = lensrc + inddst + 1;
	while (src[indsrc] != '\0' && inddst < dstsize - 1 && dstsize > 0)
		dst[inddst++] = src[indsrc++];
	dst[inddst] = '\0';
	if (dstsize + lensrc > lensrc + ind)
		return (lensrc + ind);
	return (lensrc + dstsize);
}
