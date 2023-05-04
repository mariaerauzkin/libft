/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marierau <marierau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:01:48 by marierau          #+#    #+#             */
/*   Updated: 2023/05/04 16:30:48 by marierau         ###   ########.fr       */
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
/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>
int	main(void)
{
	const char	str[] = "42 urduliz";
	int			c;
	c = 'm' + 1024;
	printf("Funcion original:     %s\n", strchr(str, c));
	printf("Funcion propio hecho: %s\n", ft_strchr(str, c));
	return (0);
}
*/
