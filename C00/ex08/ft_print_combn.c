/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:39:32 by antlopez          #+#    #+#             */
/*   Updated: 2022/10/24 17:47:19 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char comb, int N)
{
	int c;
	char r;
	
	c = 0;
	while (c < N)
	{
		r = comb[c] + '0';
		ft_putchar(r);
		c++;
		if (comb[0] < (10 - N)
			write(1, ', ', 1);
	}
}

void	ft_rec(int i, int x, char comb, int N)
{
	while (x < (10 - i))
	{
		comb[(N - 1)] = x;
		if (i > 1)
			ft_rec(i - 1, x + 1, comb, N);
		else
			ft_putchar(comb, N);
		x++;
	}
}

void	ft_print_combn(int n)
{
	char	comb[9];
	
	ft_rec(n, 0, comb, n);
 }

int	main(void)
{
	ft_print_combn(3);
	return (0);
}
