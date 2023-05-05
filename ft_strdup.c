/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marierau <marierau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 10:03:24 by marierau          #+#    #+#             */
/*   Updated: 2023/05/05 11:56:18 by marierau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *sorg)
{
	size_t	len;
	char	*sdup;

	len = ft_strlen (sorg) + 1;
	sdup = malloc (len);
	if (!sorg || !sdup)
		return (NULL);
	else
		ft_memcpy (sdup, sorg, len);
	return (sdup);
}
