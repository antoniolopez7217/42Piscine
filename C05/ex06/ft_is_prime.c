/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:41:01 by antlopez          #+#    #+#             */
/*   Updated: 2022/11/09 18:47:57 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;

	i = 1;
	if (nb > 0)
	{
		while ((i * i) <= nb)
		{
			if ((i * i) == nb)
				return (i);
			i++;
		}
		return (i - 1);
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	sqrt;

	sqrt = ft_sqrt(nb);
	i = 3;
	if ((nb % 2 == 0 && nb != 2) || nb <= 1)
		return (0);
	while (i <= sqrt)
	{
		if (nb % i == 0)
			return (0);
		i = i + 2;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d", ft_is_prime(991));
// 	return (0);
// }
