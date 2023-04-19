/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marierau <marierau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:10:54 by marierau          #+#    #+#             */
/*   Updated: 2023/04/19 15:11:02 by marierau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint(char *str)
{
	int i;

	i = 0;
	while ( str[i] != '\0')
	{
		if  (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return(1);
}

int main(void)
{
	printf(" Letras con !: %d\n", ft_isprint("MeLlamoMaria!!"));
	printf("Solo nº: %d\n", ft_isprint("123456"));
	printf("Printables: %d\n", ft_isprint("tengo_2 hijos"));
	printf("Con especial: %d\n", ft_isprint("Estë nó"));
}