/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marierau <marierau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:02:52 by marierau          #+#    #+#             */
/*   Updated: 2023/04/19 15:02:58 by marierau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(char *str)
{
	int i;

	i = 0;
	while ( str[i] != '\0')
	{
		if  ((str[i] >= '0' && str[i] <= '9')||(str[i] >= 'A' && str[i] <= 'Z')
			||(str[i] >= 'a' && str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return(1);
}

int main(void)
{
	printf("Solo letras: %d\n", ft_isalnum("MeLlamoMaria"));
	printf("Solo nº: %d\n", ft_isalnum("123456"));
	printf("comb: %d\n", ft_isalnum("tengo2hijos"));
	printf("Con especial: %d\n", ft_isalnum("tengo_2_hijos"));
}