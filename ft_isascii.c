/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marierau <marierau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:10:23 by marierau          #+#    #+#             */
/*   Updated: 2023/04/19 15:10:25 by marierau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isascii(char *str)
{
	int i;

	i = 0;
	while ( str[i] != '\0')
	{
		if  (str[i] >= 0 && str[i] <= 127)
			i++;
		else
			return (0);
	}
	return(1);
}

int main(void)
{
	printf(" Letras con !: %d\n", ft_isascii("MeLlamoMaria!!"));
	printf("Solo nº: %d\n", ft_isascii("123456"));
	printf("Printables: %d\n", ft_isascii("tengo_2 hijos"));
	printf("Con especial: %d\n", ft_isascii("Estë nó"));
}