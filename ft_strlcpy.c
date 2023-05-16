/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marierau <marierau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:57:16 by marierau          #+#    #+#             */
/*   Updated: 2023/05/16 15:05:30 by marierau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	inds;
	size_t	indd;

	inds = 0;
	indd = 0;
	while (src[inds] != '\0')
		inds++;
	if (dstsize == 0)
		return (inds);
	while (src[indd] != '\0' && indd < dstsize - 1)
	{
		dst[indd] = src[indd];
		indd++;
	}
	dst[indd] = '\0';
	return (inds);
}
