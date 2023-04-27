/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marierau <marierau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:13:55 by marierau          #+#    #+#             */
/*   Updated: 2023/04/27 17:13:58 by marierau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dest, char *src, unsigned int dstsize)
{
	unsigned int	i;
	unsigned int	i2;
	unsigned int	i3;
	unsigned int	res;

	i = 0;
	i2 = 0;
	res = 0;
	while (src[res] != '\0')
		res++;
	while (dest[i] != '\0')
		i++;
	i3 = i;
	while (src[i2] != '\0' && i < dstsize - 1 && dstsize != 0)
		dest[i++] = src[i2++];
	dest[i] = '\0';
	if (res + dstsize > res + i3)
		return (res + i3);
	return (res + dstsize);
}