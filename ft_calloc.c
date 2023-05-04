/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marierau <marierau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 21:33:13 by marierau          #+#    #+#             */
/*   Updated: 2023/05/04 22:15:27 by marierau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmbrels, size_t elssize)
{
	void	*dest;

	dest = malloc(elssize * nmbrels);
	if (!dest)
	{
		return (NULL);
	}
	ft_bzero(dest, nmbrels * elssize);
	return (dest);
}
