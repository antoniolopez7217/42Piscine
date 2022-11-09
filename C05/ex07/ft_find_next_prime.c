/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:20:17 by antlopez          #+#    #+#             */
/*   Updated: 2022/11/09 18:20:19 by antlopez         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	while (i <= 2147483647)
	{
		if (ft_is_prime(i))
			return (i);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%d", ft_find_next_prime(9562214));
// 	return (0);
// }