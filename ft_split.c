/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marierau <marierau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 10:11:07 by marierau          #+#    #+#             */
/*   Updated: 2023/05/18 11:27:00 by marierau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*free_split(char **str, int size)
{
	int	i;

	i = 0;
	while (i < size)
		free(str[i++]);
	free(str);
	return (NULL);
}

static size_t	ft_countwords(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (NULL);
	count = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s != '\0')
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

//i[0] = word_len //i[1] = index
char	**ft_split(char const *s, char c)
{
	char		**res;
	size_t		ind[2];

	res = (char **)malloc((ft_countwords(s, c) + 1) * sizeof(char *));
	if (!s || !res)
		return (0);
	ind[1] = 0;
	while (*s != '\0')
	{
		while (*s == c && *s != '\0')
			s++;
		if (*s != '\0')
		{
			if (!ft_strchr(s, c))
				ind[0] = ft_strlen(s);
			else
				ind[0] = ft_strchr(s, c) - s;
			res[ind[1]++] = ft_substr(s, 0, ind[0]);
			if (res[ind[1] - 1] == NULL)
				return (free_split(res, ind[1] - 1));
			s += ind[0];
		}
	}
	res[ind[1]] = NULL;
	return (res);
}

/* int main() {
	char const *strsplit = "Hello-World-Test";
	char csplit = '-';
	char **ressplit = ft_split(strsplit, csplit);
	int isplit = 0;

	if (ressplit != NULL) {
		while (ressplit[isplit] != NULL) {
			printf("%s\n", ressplit[isplit]);
			isplit++;
		}
} */