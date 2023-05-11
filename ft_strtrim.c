/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marierau <marierau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:11:00 by marierau          #+#    #+#             */
/*   Updated: 2023/05/11 17:06:59 by marierau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*res;
	size_t		len;

	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1) && s1 != '\0')
		s1++;
	len = ft_strlen(s1);
    while (ft_strrchr(set, *s1) )
	    len--;
	if (!res)
		return (NULL);
	return (res);
}


int main ()
{
    char    s1[] = "maria patatafria culo caliente";
    char    set[] = "culo";
    char    *res = ft_strtrim(s1, set);

    printf ("Original:%s\n", s1);
    printf ("Recorte (set):%s\n", set);
    printf ("Resultado aplicado:%s\n", res);  

    free(res);
    return (0);
}
