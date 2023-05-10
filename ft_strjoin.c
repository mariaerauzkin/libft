/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marierau <marierau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:41:18 by marierau          #+#    #+#             */
/*   Updated: 2023/05/10 16:02:26 by marierau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	unsigned int	ind1;
	unsigned int	ind2;
	unsigned int	len;
	char			*str3;

	ind1 = 0;
	ind2 = 0;
	
	if (!str1 || !str2)
		return (NULL);
	len = ft_strlen(str1) + ft_strlen(str2);
	str3 = (char *)ft_calloc(len + 1, sizeof(char));
	if (!str3)
		return(NULL);
	while (str1[ind1] != '\0')
		str3[ind1] = str1 [ind1];
		ind1++;
	while (str2[ind2] != '\0')
		str3[ind1] = str2[ind2];
		ind1++;
		ind2++;
	return (str3);
}
