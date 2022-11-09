/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:21:34 by antlopez          #+#    #+#             */
/*   Updated: 2022/11/09 18:47:24 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;

	i = 0;
	if (nb > 0)
	{
		while ((i * i) <= nb)
		{
			if (i > 46340)
				return (0);
			if ((i * i) == nb)
				return (i);
			i++;
		}
	}
	return (0);
}

// int main (void)
// {
// 	printf("%d", ft_sqrt(2147395600));
// 	return (0);
// }
