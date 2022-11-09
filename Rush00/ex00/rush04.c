/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreyes-p <nreyes-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:22:04 by nreyes-p          #+#    #+#             */
/*   Updated: 2022/10/23 14:02:26 by nreyes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_char(int y, int x, int row, int col)
{
	if (row == 0)
		if (col == 0)
			ft_putchar('A');
	else if (col == (x - 1))
		ft_putchar('C');
	else
		ft_putchar('B');
	else if (row == (y - 1))
		if (col == 0)
			ft_putchar('C');
	else if (col == (x - 1))
		ft_putchar('A');
	else
		ft_putchar('B');
	else if (col == 0 || col == (x - 1))
		ft_putchar('B');
	else
		ft_putchar(' ');
	if (col == (x - 1) && row != y)
		ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while ((x > 0 && y > 0) && row < y)
	{
		while (col < x)
		{
			print_char(y, x, row, col);
			col++;
		}
		col = 0;
		row++;
	}
}
