/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marierau <marierau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:41:18 by marierau          #+#    #+#             */
/*   Updated: 2023/05/11 13:09:18 by marierau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *str1, char const *str2)
{
	unsigned int	ind;
	unsigned int	len;
	char			*str3;

	ind = 0;
	len = ft_strlen(str1) + ft_strlen(str2);
	
	if (!str1 || !str2)
		return (NULL);
	str3 = (char *)ft_calloc(len + 1, sizeof(char));
	if (!str3)
		return(NULL);
	len = 0;
	while (str1[ind] != '\0')
	{
		str3[len] = str1 [ind];
		len++;
		ind++;
	}
	ind = 0;
	while (str2[ind] != '\0')
	{
		str3[len] = str2[ind];
		len++;
		ind++;
	}
	return (str3);
}

/* int	main(void)
{
	char	s1[] = "Ha llegado la mañana";
	char	s2[] = " y ha entrado por la ventana...";

	printf ("%s", ft_strjoin(s1, s2));
	return (0);
} */