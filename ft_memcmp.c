/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marierau <marierau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:06:44 by marierau          #+#    #+#             */
/*   Updated: 2023/05/04 16:07:14 by marierau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t len)
{
    size_t          ind;
    unsigned char   strg1;
    unsigned char   strg2;
   
    strg1 = (unsigned char *)str1;
    strg2 = (unsigned char *)str2;
    ind = 0;
   
    while (ind < len)
    {
        if (*strg1 != *strg2)
            return (*strg1 - *strg2);
        ind++;
        strg1++;
        strg2++;
    }
    return (0);
}
