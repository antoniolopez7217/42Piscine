/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:17:12 by antlopez          #+#    #+#             */
/*   Updated: 2022/11/02 17:17:14 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	check_base(char *base)
{
	int	len_base;
	int	i;

	len_base = 0;
	while (base[len_base])
	{
		if (base[len_base] == '+' || base[len_base] == '-')
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

int	check_char(char *str)
{
	if (*str == ' ')
		return (1);
	else if (*str == '-' || *str == '+')
		return (2);
	else if (*str >= '0' && *str <= '9')
		return (3);
	else if (*str >= 'a' && *str <= 'z' || *str >= 'A' && *str <= 'Z')
		return (3);
	else
		return (0);
}

void	check_sign(char *str, int *sign)
{
	if (*str == '-')
		*sign = *sign * (-1);
}

void	ft_conver_base(int *nbr, int len_base, char *base)
{
	if (nbr >= len_base)
	{	
		ft_putnbr_base(nbr / len_base, base);
		ft_putnbr_base(nbr % len_base, base);
	}
	if (nbr < len_base)
		return(base[nbr]);
}

int ft_atoi_base(char *str, char *base)
{
	int i;
	int sign;
	int nbr;
    int	len_base;

	len_base = check_base(base);
	if (len_base == 0)
		return ;
	i = 0;
	while (check_char(&str[i]) == 1)
		i++;
	sign = 1;
	while (str[i] && check_char(&str[i]) == 2)
	{
		check_sign(&str[i], &sign);
		i++;
	}
	nbr = 0;
	while (check_char(&str[i]) == 3 || str[i] == '\0')
	{
		if (str[i] == '\0')
			return (nbr * sign);
		nbr = ft_conver_base(&nbr, len_base, base);
		if (check_char(&str[i + 1]) != 3)
			return (nbr * sign);
		i++;
	}
	return (0);
}