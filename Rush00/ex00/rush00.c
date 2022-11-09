/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 20:47:55 by antlopez          #+#    #+#             */
/*   Updated: 2022/10/23 12:54:20 by aviera-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_char(int y, int x, int row, int col)
{
	if (row == 0 || row == (y - 1))
		if (col == 0 || col == (x - 1))
			ft_putchar('o');
	else
		ft_putchar('-');
	else
		if (col == 0 || col == (x - 1))
			ft_putchar('|');
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
