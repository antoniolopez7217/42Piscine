/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:55:25 by antlopez          #+#    #+#             */
/*   Updated: 2022/11/09 18:46:55 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index == 0 || index == 1)
		return (index);
	else if (index < 0)
		return (-1);
	else
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

// int main (void)
// {
// 	printf("%d", ft_fibonacci(6));
// 	return (0);
// }
