/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:44:07 by antlopez          #+#    #+#             */
/*   Updated: 2022/11/01 18:30:24 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_dec_neg(int j)
{
	ft_putchar("0123456789abcdef"[j / 16]);
	ft_putchar("0123456789abcdef"[j % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			if (str[i] < 0)
			{
				j = (str[i] * (-1));
				print_dec_neg (j);
			}
			else
			{
				ft_putchar("0123456789abcdef"[str[i] / 16]);
				ft_putchar("0123456789abcdef"[str[i] % 16]);
			}
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

// int main (void)
// {
// 	char str[] = "E con tilde:É  A con tilde: á  I con tilde:  í  ç";
// 	ft_putstr_non_printable(str);
// 	printf("\n");
// 	char str2[] = "HELLOWOƒRL98¶D";
// 	ft_putstr_non_printable(str2);
// 	printf("\n");
// 	char str3[] = "Coucou\ntu vas bien ?";
// 	ft_putstr_non_printable(str3);
// 	printf("\n");
// 	return (0);
// }
