/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marierau <marierau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:03:57 by marierau          #+#    #+#             */
/*   Updated: 2023/05/04 16:04:19 by marierau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strrchr( const char *str, int c )
{
	int	ind;

	ind = ft_strlen(str);
	while (ind >= 0)
	{
		if (str[ind] == c)
			return ((char *)str + ind);
		ind--;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	str[] = "42 Urduliz";
	int			c;
	c = 'liz';
	printf("Funcion original =     %s\n", strrchr(str, c));
	printf("Funcion hecho propio = %s\n%p", ft_strrchr(str, c), 
	ft_strrchr(str, c));
	return (0);
}
*/