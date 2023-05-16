/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marierau <marierau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 10:11:07 by marierau          #+#    #+#             */
/*   Updated: 2023/05/16 13:21:57 by marierau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_substrings(char const *s, char c)
{
	int	count;
	int	isword;

	count = 0;
	isword = 0;
	while (*s != '\0')
	{
		while (*s != c && isword == 0)
		{
			isword = 1;
			count++;
		}
		if (*s == c)
			isword = 0;
		s++;
	}
	return (count);
}

static int	count_chars(char const *s, char c)
{
	int	ind;

	ind = 0;
	while (s[ind] && s[ind] != c)
		ind++;
	return (ind);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		ind;

	res = malloc((count_substrings(s, c) + 1) * sizeof(char *));
	if (!res || !s)
		return (NULL);
	ind = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s != '\0')
		{
			res[ind] = ft_substr(s, 0, count_chars(s, c));
			ind++;
			s += count_chars(s, c);
		}
	}
	res[ind] = NULL;
	return (res);
}
/* 
int	main(void)
{
	char	s[] = "-zapato-gato----julio-agosto-mosto";
	char	s[] = "Hleo!e";
	char	c;
	char	**res;
	int		i;

	i = 0;
	c = '-';
	res = (char **) malloc (sizeof(char *) * 100);
	res = ft_split(NULL, c);
	while (res && res[i])
	{
		printf ("%s\n", res[i]);
		i++;
	}
	return (0);
} */