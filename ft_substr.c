/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marierau <marierau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 12:01:03 by marierau          #+#    #+#             */
/*   Updated: 2023/05/15 17:09:12 by marierau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substr;

	if (!str)
		return (NULL);
	if (ft_strlen((char *)str) < start)
		return (ft_strdup(""));
	if (ft_strlen((char *)str) - start < len)
		len = ft_strlen((char *)str) - start;
	substr = (char *)ft_calloc(len + 1, sizeof(char));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, str + start, len + 1);
	return (substr);
}
