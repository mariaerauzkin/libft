/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marierau <marierau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:47:35 by marierau          #+#    #+#             */
/*   Updated: 2023/05/16 17:52:56 by marierau         ###   ########.fr       */
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
	int	a;
	int	b;
	int	c;
	int	d;
	int	e;
	int	x; //esto es lo que vamos a buscar en el txt
	char *str;
	char	txt [20] = "Mola";
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
	
/* 	printf("\n");
	printf("\n");
	printf("---------------------------------------------ISALPHA----------------------");
	printf("\nM: %d", ft_isalpha(a));
	printf("\nz: %d", ft_isalpha(b));
	printf("\n2: %d", ft_isalpha(c));
	printf("\n : %d", ft_isalpha(d));
	printf("\n");
	printf("\n");
	printf("-------------------------------------------ISDIGIT----------------------");
	printf("\nM: %d", ft_isdigit(a));
	printf("\nz: %d", ft_isdigit(b));
	printf("\n2: %d", ft_isdigit(c));
	printf("\n : %d", ft_isdigit(d));
	printf("\n");
	printf("\n");
	printf("-------------------------------------------ISALNUM----------------------");
	printf("\nM: %d", ft_isalnum(a));
	printf("\nz: %d", ft_isalnum(b));
	printf("\n2: %d", ft_isalnum(c));
	printf("\n : %d", ft_isalnum(d));
	printf("\n");
	printf("\n");
	printf("-------------------------------------------ISASCII----------------------");
	printf("\nM: %d", ft_isascii(a));
	printf("\nz: %d", ft_isascii(b));
	printf("\n2: %d", ft_isascii(c));
	printf("\n : %d", ft_isascii(d));
	printf("\n");
	printf("\n");
	printf("------------------------------------------ISPRINT----------------------");
	printf("\nM: %d", ft_isprint(a));
	printf("\nz: %d", ft_isprint(b));
	printf("\n2: %d", ft_isprint(c));
	printf("\n : %d", ft_isprint(d));
	printf("\ná: %d", ft_isprint(e));
	printf("\n");
	printf("\n");
	printf("-------------------------------------------STRLEN----------------------");
	printf("\n");
	printf("\n");
	printf ("\nEl nº de char de: %s\n", str);
	printf ("Es de %zu", ft_strlen(str));
	printf("\n");
	printf("\n");
	printf("-------------------------------------------MEMSET----------------------");
	printf("\n");
	printf("\n");
	printf ("Txt original: %s\n", txt);
	printf ("1 byte cambiado: %s\n", ft_memset(txt, 'H', 1));
	printf ("4 bytes cambiados: %s\n", ft_memset(txt, 'H', 4));
	printf("\n");
	printf("\n");
	printf("-------------------------------------------BZERO----------------------");
	printf("\n");
	printf("\n");
	printf("\n");
	printf ("Txt cogido de memset es: %s\n", txt);
	ft_bzero(txt, 4);
	printf("txt despues:%s\n", txt);
	printf("\n");
	printf("\n"); 
	printf("--------------------------------------------MEMCPY-----------------------");
	printf("\n");
	printf("\n");
	printf("\n");
    char memcpysrc[] = "Hola, mundo";
    char memcpydst[20];
    printf("FT Cadena copiada: %s\n", ft_memcpy(memcpydst, memcpysrc, sizeof(memcpysrc)));
    printf("FX Cadena copiada: %s\n", memcpy(memcpydst, memcpysrc, sizeof(memcpysrc)));
	printf("\n");
	printf("\n");
	printf("-------------------------------------------MEMMOVE-----------------------");
	printf("\n");
	printf("\n");
	printf("FT Cadena copiada: %s\n", ft_memmove(memcpydst, memcpysrc, sizeof(memcpysrc)));
    printf("FX Cadena copiada: %s\n", ft_memmove(memcpydst, memcpysrc, sizeof(memcpysrc)));	
	printf("\n");
	printf("\n");
	printf("------------------------------------------STRLCPY--------------------------");
	printf("\n");
	printf("\n");
    char srcstrlcpy[] = "Maria";
    char dststrlcpy[20];
    printf("Cadena a Evaluar: %s\n", srcstrlcpy);
    printf("FT Cadena de destino: %zu\n", ft_strlcpy(dststrlcpy, srcstrlcpy, sizeof(dststrlcpy)));
    printf("FX Cadena destino: %lu\n", strlcpy(dststrlcpy, srcstrlcpy, sizeof(dststrlcpy)));
	printf("\n");
	printf("\n"); 
	printf("---------------------------------------------STRLCAT-----------------------");
	printf("\n");
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
	printf("---------------------------------------------TOLOWER----------------------");
	printf("\n");
	printf("\n");
	printf("\nM: %c", ft_tolower(a));
	printf("\n");
	printf("---------------------------------------------TOUPPER----------------------");
	printf("\n");
	printf("\n");
	printf("\nz: %c", ft_toupper(b));
	printf("\n");
	printf("\n");
	printf("\n");
	printf("---------------------------------------------STRCHR----------------------");
	printf("\n");
	printf("\n");
	char	schr [] = " 2 Hola 2 cola";
	int		findchr;
	findchr = '2';
	printf("FX: %s\n", strchr(schr, findchr));
	printf("FT: %s\n", ft_strchr(schr, findchr));
	printf("\n");
	printf("\n");
	printf("---------------------------------------------STRRCHR----------------------");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("FX: %s\n", strrchr(schr, findchr));
	printf("FT: %s\n", ft_strrchr(schr, findchr));
	printf("\n");
	printf("\n");
	printf("\n"); 
	printf("---------------------------------------------STRNCMP----------------------");
	printf("\n");
	printf("\n");
	printf("\n");
	char	scmp1 [20] = "Maria";
	char	scmp2 [20] = "Maria_ia_iaO";
	printf("FT Comparando 1 caracteres de txts, el resultado es %d\n", ft_strncmp(scmp1, scmp2, 1));
	printf("FX Comparando 1 caracteres de txts, el resultado es %d\n", strncmp(scmp1, scmp2, 1));
	printf("FT Comparando 6 char de txt(1 y 2)  %d\n", ft_strncmp(scmp1, scmp2, 6));
	printf("FX Comparando 6 char de txt(1 y 2)  %d\n", strncmp(scmp1, scmp2, 6));
	printf("\n");
	printf("\n");
	printf("\n");
	printf("---------------------------------------------MEMCHR---------------------");
	printf("\n");
	printf("\n");
	char smemchr [20] = "Maria";
	int cmemchr = 'r';
	printf("FT buscando en len 5 : %s\n", ft_memchr(smemchr, cmemchr, 5));
	printf("FX buscando en len 5 : %s\n", memchr(smemchr, cmemchr, 5));
	printf("FT buscando en len 2 :%s\n", memchr(smemchr, cmemchr, 2));
	printf("FX buscando en len 2 :%s\n", memchr(smemchr, cmemchr, 2));
 	printf("\n");
	printf("\n");
	printf("---------------------------------------------MEMCMP----------------------");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n"); 
	printf("---------------------------------------------STRNSTR----------------------");
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
	printf("---------------------------------------------ATOI----------------------");
	printf("\n"); 
	printf("\n"); 
	printf("FT :%d\n ", ft_atoi(" -2147483648"));
	printf("FX :%d\n", atoi(" -2147483648"));
	printf("FT :%d\n", ft_atoi(" ---2"));
	printf("FX :%d\n", ft_atoi(" ---2"));
	printf("FT :%d\n", ft_atoi("fdgdsfg57654"));//blanco
	printf("FX :%d\n", atoi("fdgdsfg57654"));//blanco
	printf("FT :%d\n", ft_atoi("1  55510"));// solo el 1
	printf("FX :%d\n", atoi("1  55510"));// solo el 1
	printf("FT :%d\n", ft_atoi("155510"));
	printf("FX :%d\n", atoi("155510"));
	printf("\n");
	printf("---------------------------------------------CALLOC----------------------");
	printf("\n");
	printf("\n");
	size_t	countcall;
	size_t	icall;
	int		*icall1;
	int		*icall2;
	countcall = 15;
	icall1 = (int *) calloc(countcall, sizeof(int));
	icall = 0;
	printf("FX: ");
	while (icall < countcall)
		printf("%i", icall1[icall++]);
	printf("\n");
	icall2 = (int *) ft_calloc(countcall, sizeof(int));
	icall = 0;
	printf("FT: ");
	while (icall < countcall)
		printf("%i", icall2[icall++]);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("---------------------------------------------STRDUP----------------------");
	printf("\n");
	printf("\n");
	const char	sstrdup[] = "Pues llueve mucho.";
	const char	sstrdup[] = "Pues llueve mucho.";
	printf("FT: %s\n", ft_strdup(sstrdup));
	printf("FX: %s\n", strdup(sstrdup));
	printf("\n");
	printf("\n");*/
	printf("---------------------------------------------FT_SUBSTR----------------------");
	printf("\n");
	printf("\n");
	char *substr1 = ft_substr(str, 2, 4); 
	char *substr2 = ft_substr(str, 14, 15); 
	printf("Cadena original: %s\n", str);
    printf("Subcadena 1: %s\n", substr1);
    printf("Subcadena 2: %s\n", substr2);
	free(substr1);
	free(substr2);
   	printf("\n");cd
	printf("---------------------------------------------FT_STRJOIN----------------------");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("---------------------------------------------FT_STRTRIM----------------------");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("---------------------------------------------FT_SPLIT----------------------");
	printf("\n");
	printf("\n");

	printf("\n");
	printf("---------------------------------------------FT_----------------------");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	/* 	printf("---------------------------------------------FT_PUTCHAR_FD----------------------");
	printf("\n");
	printf("\n");
	int fd;
	fd = open("putchar_fd.txt", O_CREAT | O_WRONLY, 0777);
	if (fd == -1)
		perror("La cagaste");
		return 1;
	ft_putchar_fd(c, fd);
	close(fd);
	return 0;
	printf("\n"); 
	printf("----------------------------------------------FT_PUTSTR_FD----------------------");
	printf("\n");
	printf("\n");
	int fdstr;  
	fdstr = open("putstr_fd.txt", O_CREAT | O_WRONLY, 0777);
	if (fdstr == -1)	
		perror ("La cagaste");
		return 1;
	ft_putstr_fd(ptstr, fdstr);
	close(fdstr);
	return 0;	
	printf("\n");
	printf("\n"); 
	printf("----------------------------------------------FT_PUTENDL_FD----------------------");
	printf("\n");
	printf("\n");
	int	i = 0;
	int	fdend;
	fdend = open("putstr_fd.txt", O_CREAT | O_WRONLY, 0777);
	if (fdend == -1)	
		perror ("La cagaste");
		return 1;
	ft_putendl_fd(ptstr, fdend);
	close(fdend);
	return 0;	
	printf("\n");
	printf("\n");
	printf("----------------------------------------------FT_PUTNBR_FD----------------------");
	printf("\n");
	printf("\n");
	int		fdnbr;
	int		nbrfd;
	nbrfd = -2147483648;
	nbrfd = -57444;
	fdnbr = open("putnbr_fd.txt", 1);
	if (fdnbr == -1)
	{
		perror("Error al abrir el archivo");
		return (1);
	}
	ft_putnbr_fd(nbrfd, fdnbr;
	close(fdnbr);
	return (0); */
}
