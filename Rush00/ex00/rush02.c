/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 22:35:22 by antlopez          #+#    #+#             */
/*   Updated: 2022/10/23 14:02:01 by nreyes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_char(int y, int x, int row, int col)
{
	if (row == 0 || row == (y - 1))
		if (row == 0 && (col == 0 || col == (x - 1)))
			ft_putchar('A');
	else if (row == (y - 1) && (col == 0 || col == (x - 1)))
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
