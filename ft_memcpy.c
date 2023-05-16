/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marierau <marierau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 12:57:52 by marierau          #+#    #+#             */
/*   Updated: 2023/05/16 13:36:00 by marierau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	char	*dstcpy;
	char	*srccpy;
	size_t	ind;

	ind = 0;
	dstcpy = (char *)dst;
	srccpy = (char *)src;
	if (!dst && !src)
		return (NULL);
	while (ind < len)
	{
		dstcpy[ind] = srccpy[ind];
		ind++;
	}
	return (dstcpy);
}
