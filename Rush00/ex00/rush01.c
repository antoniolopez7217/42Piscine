/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreyes-p <nreyes-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:22:04 by nreyes-p          #+#    #+#             */
/*   Updated: 2022/10/23 13:58:32 by nreyes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_char(int y, int x, int row, int col)
{
	if (row == 0)
		if (col == 0)
			ft_putchar('/');
	else if (col == (x - 1))
		ft_putchar('\\');
	else
		ft_putchar('*');
	else if (row == (y - 1))
		if (col == 0)
			ft_putchar('\\');
	else if (col == (x - 1))
		ft_putchar('/');
	else
		ft_putchar('*');
	else if (col == 0 || col == (x - 1))
		ft_putchar('*');
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
