/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marierau <marierau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:05:56 by marierau          #+#    #+#             */
/*   Updated: 2023/05/04 16:06:21 by marierau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *str, int c, size_t len)
{
    const unsigned char *strg;
    size_t              ind;


    strg = (const unsigned char *)str;
    ind = 0;
    while (ind < len)
    {
        if (strg[ind] == (unsigned char)c)
            return ((void*)&strg[ind]);
        ind++;
    }
    return (NULL);
}
