/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marierau <marierau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 13:03:52 by marierau          #+#    #+#             */
/*   Updated: 2023/05/15 16:28:50 by marierau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	ind;
	size_t			len;
	char			*res;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	res = (char *)ft_calloc(len + 1, sizeof(char));
	if (!res)
		return (NULL);
	ind = 0;
	while (s[ind])
	{
		res[ind] = f(ind, s[ind]);
		ind++;
	}
	res[ind] = '\0';
	return (res);
}
