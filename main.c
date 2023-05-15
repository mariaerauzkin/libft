/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marierau <marierau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:47:35 by marierau          #+#    #+#             */
/*   Updated: 2023/05/15 13:16:37 by marierau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <fcntl.h>

int	main(void)
{
/* 	int	a;
	int	b;
	int	c;
	int	d;
	int	e;
	int	x; //esto es lo que vamos a buscar en el txt
	char *str;
	char	txt [20] = "Molaaaa";
	char	txt1 [20] = "Mazo";
	char	txt2 [20] = "molar";
	int		result;

	
	
	str = "42 Urduliz 42";
	a = 'M';
	b = 'z';
	c = '2';
	d = ' ';
	e = 133; //como numero ascci entra y como "á no"
	x = '4';
	
	printf("\n");
	printf("\n");
	printf("---------------------ISALPHA----------------------");
	printf("\n");
	printf("\n");
	printf("\nM: %d", ft_isalpha(a));
	printf("\nz: %d", ft_isalpha(b));
	printf("\n2: %d", ft_isalpha(c));
	printf("\n : %d", ft_isalpha(d));
	printf("\n");
	printf("\n");
	printf("-----------------ISDIGIT----------------------");
	printf("\n");
	printf("\n");
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
	printf("\n");
	printf("\n");
	printf("\nM: %d", ft_isascii(a));
	printf("\nz: %d", ft_isascii(b));
	printf("\n2: %d", ft_isascii(c));
	printf("\n : %d", ft_isascii(d));
	printf("\n");
	printf("\n");
	printf("--------------------------------ISPRINT----------------------");
	printf("\n");
	printf("\n");
	printf("\nM: %d", ft_isprint(a));
	printf("\nz: %d", ft_isprint(b));
	printf("\n2: %d", ft_isprint(c));
	printf("\n : %d", ft_isprint(d));
	printf("\ná: %d", ft_isprint(e));
	printf("\n");
	printf("\n");
	printf("--------------------------------STRLEN----------------------");
	printf("\n");
	printf("\n");
	printf ("\nEl nº de char de: %s\n", str);
	printf ("Es de %zu", ft_strlen(str));
	printf("\n");
	printf("\n");
	printf("--------------------------------MEMSET----------------------");
	printf("\n");
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
	printf("\n");
	printf("\nIDEM ANTERIOR");
	printf("\n");
	printf("\n");
	printf("------------------------------STRLCPY------------------------NE COMPREND PAS--");
	printf("\n");
	printf("\n");
	printf("\nNE COMPREND PAS");
	printf("\n");
	printf("\n"); 
	printf("-------------------------------STRLCAT-----------------------");
	printf("\n");
	printf("\n");
	char	txt10 [20] = "Molar";
	char	txt11 [20] = "Mazo";
	size_t	destsize = sizeof(txt10);
	printf("Destino : %s\n", txt10);
	printf("nº char : %zu\n", ft_strlcat (txt10, txt11, destsize));
	char	txt12 [20] = "Molar";
	printf ("Fx original: %zu\n", strlcat (txt12, txt11, destsize));
	printf("\n");
	printf("\n");
	printf("\n"); 
	printf("-------------------------------TOLOWER----------------------");
	printf("\n");
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
	printf("\n");
	printf("------------------------------MEMCHR--------------------TAMPOCO LO CONSIGO--");
	printf("\n");
	printf("\n");
	printf("\n");
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
	char	big[] = "Esto es 42 Urduliz, may the 4th be with U";
    char	little1[] = "Maria";
    char	little2[] = "42";
    char	*result20;
    char	*result201;
	result20 = ft_strnstr(big, little1, sizeof(big));
    result201 = ft_strnstr(big, little2, sizeof(big));
    printf("Result 1: %s\n", result20 ? result20 : "NULL");
    printf("Result 2: %s\n", result201 ? result201 : "NULL");
	printf("\n");
	printf("\n"); 
	printf("------------------------------ATOI----------------------");
	printf("%d\nft:", ft_atoi(" -2147483648"));
	printf("%d\nft:", ft_atoi(" 2147483647"));
	printf("%d\nft:", ft_atoi(" ---2"));
	printf("%d\nft:", ft_atoi("-1000"));
	printf("%d\nft:", ft_atoi("fdgdsfg57654"));//blanco
	printf("%d\nft:", ft_atoi("1  55510"));// solo el 1
	printf("%d\nft:", ft_atoi(""));
	printf("------------------------------CALLOC----------------------");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("------------------------------FT_SUBSTR----------------------");
	printf("\n");
	printf("\n");
	char *substr1 = ft_substr(str, 2, 4); 
	char *substr2 = ft_substr(str, 14, 15); 
	printf("Cadena original: %s\n", str);
    printf("Subcadena 1: %s\n", substr1);
    printf("Subcadena 2: %s\n", substr2);
    free(substr1);
    free(substr2);
	printf("\n");  */
	printf("------------------------------FT_PUTCHAR_FD----------------------");
	printf("\n");
	printf("\n");
	int fd;
	char c = 'a';
	fd = open("putchar_fd.txt", O_CREAT | O_WRONLY, 0777);
	if (fd == -1)
		perror("La cagaste");
		return 1;
	ft_putchar_fd(c, fd);
	close(fd);
	return 0;
	printf("\n"); 
	printf("------------------------------FT_PUTSTR_FD----------------------");
	printf("\n");
	printf("\n");
	char	ptstr[] = "canta y no llores";
	int	i = 0;
	fd = open("putstr_fd.txt", O_CREAT | O_WRONLY, 0777);
	if (fd == -1)	
		perror ("La cagaste");
		return 1;
	ft_putstr_fd(ptstr, fd);
	close(fd);
	return 0;	
	printf("\n");
	printf("\n"); 
} 
