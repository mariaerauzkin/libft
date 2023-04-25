/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marierau <marierau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:47:35 by marierau          #+#    #+#             */
/*   Updated: 2023/04/25 15:56:35 by marierau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <strings.h>

int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;
	int	e;
	char *str;
	char	txt [7] = "Mola";
	
	str = "42 Urduliz";
	a = 'M';
	b = 'z';
	c = '2';
	d = ' ';
	e = 133; //como numero ascci entra y como "á no"
	printf("\n");
	printf("\n");
	printf("-----------------ISALPHA----------------------");
	printf("\nM: %d", ft_isalpha(a));
	printf("\nz: %d", ft_isalpha(b));
	printf("\n2: %d", ft_isalpha(c));
	printf("\n : %d", ft_isalpha(d));
	printf("\n");
	printf("\n");
	printf("-----------------ISDIGIT----------------------");
	printf("\nM: %d", ft_isdigit(a));
	printf("\nz: %d", ft_isdigit(b));
	printf("\n2: %d", ft_isdigit(c));
	printf("\n : %d", ft_isdigit(d));
	printf("\n");
	printf("\n");
	printf("-----------------ISALNUM----------------------");
	printf("\nM: %d", ft_isalnum(a));
	printf("\nz: %d", ft_isalnum(b));
	printf("\n2: %d", ft_isalnum(c));
	printf("\n : %d", ft_isalnum(d));
	printf("\n");
	printf("\n");
	printf("-----------------ISASCII----------------------");
	printf("\nM: %d", ft_isascii(a));
	printf("\nz: %d", ft_isascii(b));
	printf("\n2: %d", ft_isascii(c));
	printf("\n : %d", ft_isascii(d));
	printf("\n");
	printf("\n");
	printf("-----------------ISPRINT----------------------");
	printf("\nM: %d", ft_isprint(a));
	printf("\nz: %d", ft_isprint(b));
	printf("\n2: %d", ft_isprint(c));
	printf("\n : %d", ft_isprint(d));
	printf("\ná: %d", ft_isprint(e));
	printf("\n");
	printf("\n");
	printf("-----------------STRLEN----------------------");
	printf ("\nEl nº de char de: %s\n", str);
	printf ("Es de %zu", ft_strlen(str));
	printf("\n");
	printf("\n");
	printf("-----------------MEMSET----------------------");
	printf("\n");
	printf ("Txt original: %s\n", txt);
	printf ("1 byte cambiado: %s\n", ft_memset(txt, 'H', 1));
	printf ("4 bytes cambiados: %s\n", ft_memset(txt, 'H', 4));
	printf("\n");
	printf("-----------------BZERO----------------------");
	printf("\n");
	printf ("Txt cogido de memset es: %s\n", txt);
	ft_bzero(txt, 4);
	printf("txt despues:%s\n", txt);
	printf("\n");
	printf("\n");
	printf("-------------------MEMCPY-------------------------");
	printf("\n");
	printf ("Txt cogido de memset es: %s\n", txt);
	ft_bzero(txt, 4);
	printf("txt despues:%s\n", txt);
	printf("\n");
	printf("\n");
}

