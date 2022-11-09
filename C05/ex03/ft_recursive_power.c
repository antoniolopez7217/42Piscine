/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:46:04 by antlopez          #+#    #+#             */
/*   Updated: 2022/11/09 18:46:34 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power != 0)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (1);
}

// int main(void)
// {
// 	printf("%d", ft_recursive_power(-5,2));
// 	return (0);
// }
