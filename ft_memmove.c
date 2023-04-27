/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marierau <marierau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:02:34 by marierau          #+#    #+#             */
/*   Updated: 2023/04/27 16:59:49 by marierau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dstmove;
	char	*srcmove;
	size_t	ind;

	dstmove = (char *)dst;
	srcmove = (char *)src;
	if (!dst && !src)
		return (NULL);
	ind = 0;
	if (dstmove > srcmove)
		while (len--)
			dstmove[len] = srcmove[len];
	else
	{
		while (len--)
		{
			dstmove[ind] = srcmove[ind];
			ind++;
		}
	}
	return (dstmove);
}
