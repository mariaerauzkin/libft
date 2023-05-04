/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marierau <marierau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:03:57 by marierau          #+#    #+#             */
/*   Updated: 2023/05/04 18:38:30 by marierau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strrchr( const char *str, int c )
{
	int		ind;
	char	strg;

	strg = (char) c;
	ind = ft_strlen(str);
	while (ind >= 0)
	{
		if (str[ind] == strg)
			return ((char *)str + ind);
		ind--;
	}
	return (NULL);
}
