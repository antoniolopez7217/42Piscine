/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:45:18 by antlopez          #+#    #+#             */
/*   Updated: 2022/11/09 18:45:58 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	solution;

	solution = 1;
	if (power < 0)
		return (0);
	else
	{
		while (power > 0)
		{
			solution = nb * solution;
			power--;
		}
		return (solution);
	}
}

// int main(void)
// {
// 	printf("%d", ft_iterative_power(5,2));
// 	return (0);
// }
