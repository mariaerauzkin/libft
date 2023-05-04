/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marierau <marierau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:06:44 by marierau          #+#    #+#             */
/*   Updated: 2023/05/04 21:01:54 by marierau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_bytecmp(const unsigned char *str1, const unsigned char *str2, size_t len)
{
	size_t	ind;

	ind = 0;
	while ((ind < len))
	{
		if (str1[ind] != str2[ind])
		{
			return (str1[ind] - str2[ind]);
		}
		ind++;
	}
	return (0);
}

int	ft_memcmp(const void *str1, const void *str2, size_t len)
{
	return (ft_bytecmp(str1, str2, len));
}
