/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzaga <lgonzaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 23:23:41 by lgonzaga          #+#    #+#             */
/*   Updated: 2022/11/06 23:23:43 by lgonzaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/utils.h"

void	ft_putnbr(long nb)
{
	if (nb < 0)
	{
		write(1, &"-", 1);
		nb *= -1;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	c;

	src_len = 0;
	while (src[src_len])
		src_len++;
	c = 0;
	if (size)
	{
		while (c < src_len && c < size - 1)
		{
			dest[c] = src[c];
			c++;
		}
		dest[c] = 0;
	}
	return (src_len);
}
