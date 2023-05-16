/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marierau <marierau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 14:39:08 by marierau          #+#    #+#             */
/*   Updated: 2023/05/15 17:17:37 by marierau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_n(int n)
{
	int				count;
	unsigned int	abs;

	count = 1;
	if (n < 0)
	{
		abs = -n;
		count++;
	}
	else
		abs = n;
	while (abs / 10 > 0)
	{
		count++;
		abs = abs / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int				count;
	char			*str;
	unsigned int	abs;

	count = count_n(n);
	str = malloc(count + 1);
	if (!str)
		return (0);
	str[count] = '\0';
	if (n < 0)
		abs = -n;
	else
		abs = n;
	while (count > 0)
	{
		count--;
		str[count] = (abs % 10) + 48;
		abs = abs / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
