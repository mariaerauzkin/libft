/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marierau <marierau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:04:32 by marierau          #+#    #+#             */
/*   Updated: 2023/04/17 17:36:38 by marierau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha (char *str)
{
   int i;


   i = 0;
   while (str[i] != '\0')
       if (str[i] >= 'A' && str [i] <= 'Z')
           i++;
       else if (str [i] >= 'a' && str [i] <= 'z')
           i++;
       else if (str[i] == '\0')
           return (1);
       else
           return (0);
     
   return (1);
}
/*
int main(void)
{
   printf("MeLlamoMaria: %d", ft_isalpha("MeLlamoMaria"));
   printf("\nTengo 2 hijos %d", ft_isalpha("abc1defghijkl"));
   printf("\nNº intentos ex: %d", ft_isalpha("-_134556efghij67"));
}
*/

