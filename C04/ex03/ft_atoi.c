/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:40:12 by antlopez          #+#    #+#             */
/*   Updated: 2022/11/03 19:11:10 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	check_char(char *str)
{
	if (*str == 32 || (*str >= 9 && *str <= 13))
		return (1);
	else if (*str == '-' || *str == '+')
		return (2);
	else if (*str >= '0' && *str <= '9')
		return (3);
	else
		return (0);
}

void	check_sign(char *str, int *sign)
{
	if (*str == '-')
		*sign = *sign * (-1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	number;

	i = 0;
	while (check_char(&str[i]) == 1)
		i++;
	sign = 1;
	while (str[i] && check_char(&str[i]) == 2)
	{
		check_sign(&str[i], &sign);
		i++;
	}
	number = 0;
	while (check_char(&str[i]) == 3 || str[i] == '\0')
	{
		if (str[i] == '\0')
			return (number * sign);
		number = (number * 10) + (str[i] - 48);
		if (check_char(&str[i + 1]) != 3)
			return (number * sign);
		i++;
	}
	return (0);
}

// int main (void)
// {
// 	char str[] = "---+--+1234ab567";
// 	printf("%d\n", ft_atoi(str));
// 	char str1[] = "-- -+--+1234ab567";
// 	printf("%d\n", ft_atoi(str1));
// 	char str2[] = "\t---+--+12a34ab567";
// 	printf("%d\n", ft_atoi(str2));
// 	char str3[] = "-+-+-+-+-+-+12+56434";
// 	printf("%d\n", ft_atoi(str3));
// 	return (0);
// }
