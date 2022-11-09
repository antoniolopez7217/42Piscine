/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:52:45 by antlopez          #+#    #+#             */
/*   Updated: 2022/11/04 11:30:45 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		write(1, &argv[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (argv[i] && argc > 0)
	{
		ft_putstr(argv[i]);
		i++;
		write(1, "\n", 1);
	}
	return (0);
}
