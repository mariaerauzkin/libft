/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marierau <marierau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:47:05 by marierau          #+#    #+#             */
/*   Updated: 2023/04/25 09:19:54 by marierau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pos, int c, size_t len)
{
	unsigned char	*s;
	size_t			ind;

	ind = 0;
	s = pos;
	while (ind < len)
	{
		s[ind] = (unsigned char)c;
		ind++;
	}
	return (pos);
}
