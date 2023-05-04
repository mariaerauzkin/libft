/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marierau <marierau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 15:15:13 by marierau          #+#    #+#             */
/*   Updated: 2023/05/04 20:13:05 by marierau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	ind;
	int	sign;
	int	digit;

	ind = 0;
	sign = 1;
	digit = 0;
	while ((str[ind] >= '\t' && str[ind] <= '\r') || str[ind] == ' ')
		ind++;
	if (str[ind] == '-')
	{
		sign *= -1;
			ind++;
	}
	else if (str[ind] == '+')
		ind++;
	while (str[ind] >= '0' && str[ind] <= '9')
	{
		digit = (str[ind] - '0') + (digit * 10);
		ind++;
	}
	return (digit * sign);
}

/*
int		main(void)	
{
	printf("%d\n", ft_atoi("      	---+--+2147--+-ab567"));
	printf("%d\n", ft_atoi(" -2147483648"));
	printf("%d\n", ft_atoi(" 2147483647"));
	printf("%d\n", ft_atoi(" ---2"));
	printf("%d\n", ft_atoi("-1000"));
	printf("%d\n", ft_atoi("fdgdsfg57654"));//blanco
	printf("%d\n", ft_atoi("1  55510"));// solo el 1
	printf("%d\n", ft_atoi(""));
}
*/