/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 22:45:57 by antlopez          #+#    #+#             */
/*   Updated: 2022/10/23 12:51:09 by nreyes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_char(int y, int x, int row, int col)
{
	if (row == 0 || row == (y - 1))
		if (col == 0)
			ft_putchar('A');
	else if (col == (x - 1))
		ft_putchar('C');
	else
		ft_putchar('B');
	else
		if (col == 0 || col == (x - 1))
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
	while ((x > 0 && y > 0) && row < y)
	{
		col = 0;
		while (col < x)
		{
			print_char(y, x, row, col);
			col++;
		}
		row++;
	}
}
