/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marierau <marierau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:07:34 by marierau          #+#    #+#             */
/*   Updated: 2023/05/04 16:08:50 by marierau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  ib;
    size_t  il;
    char    *ret;


    if (little[0] == '\0')
        return ((char *) big);
    if (len == 0)
        return (0);
    ib = 0;
    while (big[ib] != '\0' && ib <= len)
    {
        il = 0;
        ret = (char *) &big[ib];
        while (big[ib++] == little[il] && little[il] != '\0' && ib <= len)
            il++;
        if (little[il] == '\0')
            return (ret);
        ib = ib - il;
    }
    return (0);
}
#include "libft.h"
#include <stdio.h>


/* int main(void)
{
    char big[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
    char little1[] = "sit";
    char little2[] = "tur";
    char little3[] = "ipsum";
    char *result1;
    char *result2;
    char *result3;


    result1 = ft_strnstr(big, little1, sizeof(big));
    result2 = ft_strnstr(big, little2, sizeof(big));
    result3 = ft_strnstr(big, little3, sizeof(big));


    printf("Result 1: %s\n", result1 ? result1 : "NULL");
    printf("Result 2: %s\n", result2 ? result2 : "NULL");
    printf("Result 3: %s\n", result3 ? result3 : "NULL");


    return (0);
}
 */