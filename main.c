/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marierau <marierau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:47:35 by marierau          #+#    #+#             */
/*   Updated: 2023/05/04 19:20:12 by marierau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <strings.h>

int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;
	int	e;
	int	x; //esto es lo que vamos a buscar en el txt
	char *str;
	char	txt [20] = "Mola";
	char	txt1 [20] = "mola";
	char	txt2 [20] = "molar";
	int		result;
	int		tofind;
	void	*result2;
	
	
	str = "Urduliz 42";
	a = 'M';
	b = 'z';
	c = '2';
	d = ' ';
	e = 133; //como numero ascci entra y como "á no"
	x = '4';
	tofind = "l"
	printf("\n");
	printf("\n");
	printf("---------------------ISALPHA----------------------");
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
	printf("----------------------ISALNUM----------------------");
	printf("\nM: %d", ft_isalnum(a));
	printf("\nz: %d", ft_isalnum(b));
	printf("\n2: %d", ft_isalnum(c));
	printf("\n : %d", ft_isalnum(d));
	printf("\n");
	printf("\n");
	printf("--------------------ISASCII----------------------");
	printf("\nM: %d", ft_isascii(a));
	printf("\nz: %d", ft_isascii(b));
	printf("\n2: %d", ft_isascii(c));
	printf("\n : %d", ft_isascii(d));
	printf("\n");
	printf("\n");
	printf("--------------------------------ISPRINT----------------------");
	printf("\nM: %d", ft_isprint(a));
	printf("\nz: %d", ft_isprint(b));
	printf("\n2: %d", ft_isprint(c));
	printf("\n : %d", ft_isprint(d));
	printf("\ná: %d", ft_isprint(e));
	printf("\n");
	printf("\n");
	printf("--------------------------------STRLEN----------------------");
	printf ("\nEl nº de char de: %s\n", str);
	printf ("Es de %zu", ft_strlen(str));
	printf("\n");
	printf("\n");
	printf("--------------------------------MEMSET----------------------");
	printf("\n");
	printf ("Txt original: %s\n", txt);
	printf ("1 byte cambiado: %s\n", ft_memset(txt, 'H', 1));
	printf ("4 bytes cambiados: %s\n", ft_memset(txt, 'H', 4));
	printf("\n");
	printf("--------------------------------BZERO----------------------");
	printf("\n");
	printf ("Txt cogido de memset es: %s\n", txt);
	ft_bzero(txt, 4);
	printf("txt despues:%s\n", txt);
	printf("\n");
	printf("\n");
	printf("--------------------------------MEMCPY-----------------------con malloc y ni idea--");
	printf("\n");
	printf("\nfalta que va con malloc y ni idea");
	printf("\n");
	printf("\n");
	printf("-------------------------------MEMMOVE----------------------con malloc y ni idea--");
	printf("\n");
	printf("\nIDEM ANTERIOR");
	printf("\n");
	printf("\n");
	printf("------------------------------STRLCPY------------------------NE COMPREND PAS--");
	printf("\n");
	printf("\nNE COMPREND PAS");
	printf("\n");
	printf("\n");
	printf("-------------------------------STRLCAT-----------------------NE COMPREND PAS--");
	printf("\n");
	printf("\nIem du tout");
	printf("\n");
	printf("\n");
	printf("-------------------------------TOLOWER----------------------");
	printf("\n");
	printf("\nM: %c", ft_tolower(a));
	printf("\n");
	printf("------------------------------TOUPPER----------------------");
	printf("\n");
	printf("\n");
	printf("\nz: %c", ft_toupper(b));
	printf("\n");
	printf("\n");
	printf("\n");
	printf("------------------------------STRCHR----------------------");
	printf("\n");
	printf("\n");
	printf("Funcion original:     %s\n", strchr(str, x));
	printf("Funcion propio hecho: %s\n", ft_strchr(str, x));
	printf("\n");
	printf("\n");
	printf("------------------------------STRRCHR-------------------AQUI HAY ALGO MAL---");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("Funcion original:     %s\n", strrchr(str, x));
	printf("Funcion propio hecho: %s\n", ft_strrchr(str, x));
	printf("\n");
	printf("\n");
	printf("\n");
	printf("------------------------------STRCMP----------------------");
	printf("\n");
	printf("\n");
	printf("\n");
    result = ft_strncmp(txt1, txt2, 4);
    printf("Comparando 4 char de txt(1 y 2)  %d\n", result);
    result = ft_strncmp(txt1, txt2, 5);
    printf("Comparando los 5 caracteres de txts, el resultado es %d\n", result);
    result = ft_strncmp(txt1, txt2, strlen(txt));
	printf("\n");
	printf("\n");
	printf("------------------------------MEMCHR--------------------TAMPOCO LO CONSIGO--");
	printf("\n");
	printf("\n");
	printf("\n");
   	result2 = ft_strncmp(str, tofind, strlen);
    printf("Buscando 42 en el str  %d\n", result);
    printf("\n");
	printf("\n");
	printf("------------------------------MEMCMP----------------------");
	printf("\n");
	printf("\n");
	printf("\n");
   
    printf("\n");
	printf("\n");
	printf("------------------------------STRNSTR----------------------");
	printf("\n");
	printf("\n");
	printf("\n");
   	result2 = ft_strncmp(str, tofind, strlen);
    printf("Buscando 42 en el str  %d\n", result);
    printf("\n");
	printf("\n");


	
}

