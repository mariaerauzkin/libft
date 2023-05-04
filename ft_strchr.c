/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marierau <marierau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:01:48 by marierau          #+#    #+#             */
/*   Updated: 2023/05/04 19:39:39 by marierau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		ind;
	char	*strg;

	ind = 0;
	strg = (char *)str;
	while (strg[ind] != '\0')
	{
		if (strg[ind] == (unsigned char)c)
			return (&strg[ind]);
		ind++;
	}
	if ((unsigned char)c == '\0')
		return (&strg[ind]);
	return (NULL);
}
