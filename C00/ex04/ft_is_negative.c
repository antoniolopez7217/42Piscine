/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:42:32 by antlopez          #+#    #+#             */
/*   Updated: 2022/10/23 20:19:55 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	number;

	if (n >= 0)
	{
		number = 'P';
		write(1, &number, 1);
	}
	else
	{
		number = 'N';
		write(1, &number, 1);
	}
}
