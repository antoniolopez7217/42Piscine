/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:25:39 by antlopez          #+#    #+#             */
/*   Updated: 2022/11/04 11:33:26 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	ft_compare(char *argv1, char *argv2)
{
	int	i;

	i = 0;
	while ((argv1[i] == argv2[i]) && argv1 && argv2)
		i++;
	return (argv1[i] - argv2[i]);
}

int	main(int argc, char *argv[])
{
	char	*aux;
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{	
			if (ft_compare(argv[i], argv[j]) > 0)
			{
				aux = argv[i];
				argv[i] = argv[j];
				argv[j] = aux;
			}
			j++;
		}
		i++;
	}
	ft_putstr(argv);
	return (0);
}
