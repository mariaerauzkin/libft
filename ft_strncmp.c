/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marierau <marierau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:04:45 by marierau          #+#    #+#             */
/*   Updated: 2023/05/04 16:54:46 by marierau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t len)
{
	size_t	ind;

	ind = 0;
	while (ind < len && (str1[ind] != '\0' || str2[ind] != '\0'))
	{
		if (str1[ind] != str2[ind])
		{
			return ((unsigned char)str1[ind] - (unsigned char)str2[ind]);
		}
		ind++;
	}
	return (0);
}
