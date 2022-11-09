/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:44:09 by antlopez          #+#    #+#             */
/*   Updated: 2022/11/02 21:46:11 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base(char *base)
{
	int	len_base;
	int	i;

	len_base = 0;
	while (base[len_base])
	{
		if (base[len_base] == '+' || base[len_base] == '-')
			return (0);
		if (base[len_base] < 32 || base[len_base] > 126)
			return (0);
		i = len_base + 1;
		while (base[i])
		{
			if (base[len_base] == base[i])
				return (0);
			i++;
		}
		len_base++;
	}
	if (len_base <= 1)
		return (0);
	return (len_base);
}

void	ft_base_minnegative(unsigned int nbr, unsigned int len_base, char *base)
{
	if (nbr >= len_base)
	{	
		ft_base_minnegative(nbr / len_base, len_base, base);
		ft_base_minnegative(nbr % len_base, len_base, base);
	}
	else
		ft_putchar(base[nbr]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len_base;

	len_base = check_base(base);
	if (len_base == 0)
		return ;
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_base_minnegative(2147483648, len_base, base);
	}
	else
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = nbr * (-1);
		}
		if (nbr >= len_base)
		{	
			ft_putnbr_base(nbr / len_base, base);
			ft_putnbr_base(nbr % len_base, base);
		}
		if (nbr < len_base)
			ft_putchar(base[nbr]);
	}
}

// int main(void)
// {
// 	char base[] = "0123456789ABCDEF";
// 	int nbr = -6564;
// 	ft_putnbr_base(nbr, base);
// 	return (0);
// }
