/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:03:05 by antlopez          #+#    #+#             */
/*   Updated: 2022/11/09 18:43:54 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	else
	{
		while (nb > 0)
		{
			result = result * nb;
			nb--;
		}
		return (result);
	}
}

// int main(void)
// {
// 	printf("%d", ft_iterative_factorial(5));
// 	return (0);
// }
