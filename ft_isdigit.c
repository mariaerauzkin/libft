/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marierau <marierau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:10:49 by marierau          #+#    #+#             */
/*   Updated: 2023/04/17 17:14:05 by marierau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_isdigit(char *str)
{
   int i;


   i = 0;
   while (str[i] != '\0')
    if (str[i] >= '0' && str [i] <= '9')
        i++;
    else if (str[i] == '\0')
        return (1);
       else
        return (0);
     
   return (1);
}

int main(void)
{
   printf("MeLlamoMaria: %d", ft_isdigit("MeLlamoMaria"));
   printf("\nTengo 2 hijos %d", ft_isdigit("0"));
   printf("\nNº intentos ex: %d", ft_isdigit("67"));
}

