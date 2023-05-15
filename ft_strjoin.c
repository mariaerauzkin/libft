/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marierau <marierau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:41:18 by marierau          #+#    #+#             */
/*   Updated: 2023/05/15 17:04:16 by marierau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
		return (NULL);
	len = 0;
	while (str1[ind] != '\0')
		str3[len++] = str1 [ind++];
	ind = 0;
	while (str2[ind] != '\0')
		str3[len++] = str2[ind++];
	return (str3);
}
