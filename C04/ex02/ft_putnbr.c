/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 22:01:37 by antlopez          #+#    #+#             */
/*   Updated: 2022/11/02 20:53:19 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	p;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = nb * (-1);
		}
		if (nb > 9)
		{	
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		if (nb < 10)
		{
			p = nb + '0';
			write(1, &p, 1);
		}
	}
}

// int	main(void)
// {
// 	ft_putnbr(45);
// 	ft_putnbr(-45);
// 	ft_putnbr(0);
// 	ft_putnbr(-2147483648);
// 	return (0);
// }
