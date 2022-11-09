/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzaga <lgonzaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 23:21:41 by lgonzaga          #+#    #+#             */
/*   Updated: 2022/11/06 23:21:45 by lgonzaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/check_args.h"

long	ft_atoi(char *str)
{
	int		idx;
	long	result;

	idx = 0;
	result = 0;
	while (str[idx])
	{
		if (str[idx] >= '0' && str[idx] <= '9')
			result = result * 10 + (str[idx] - 48);
		else
			return (-1);
		idx++;
	}
	if (result > 999999999999)
		return (-2);
	return (result);
}

void	ft_read_standard_input(long *num, char **path)
{
	char	bufferp[100];
	char	buffern[100];
	int		len;

	write(1, "Give a valid path for the dicctionary:\n", 39);
	len = read(STDIN_FILENO, bufferp, 100);
	bufferp[len - 1] = 0;
	*path = malloc(len);
	ft_strlcpy(*path, bufferp, len);
	write(1, "Path set. Now enter a number:\n", 30);
	len = read(STDIN_FILENO, buffern, 100);
	buffern[len - 1] = 0;
	*num = ft_atoi(buffern);
}

int	ft_check_path(char *path)
{
	int	fd;

	fd = open(path, O_RDONLY);
	close(fd);
	return (fd == -1);
}

int	ft_check_args(int argc, char **argv, long *num, char **path)
{
	int		dct_pth_err;

	if (argc == 1)
		ft_read_standard_input(num, path);
	else if (argc == 2)
	{
		*num = ft_atoi(argv[1]);
		*path = malloc(sizeof(13));
		ft_strlcpy(*path, "numbers.dict", 13);
	}
	else if (argc == 3)
	{
		*num = ft_atoi(argv[2]);
		*path = argv[1];
	}
	dct_pth_err = ft_check_path(*path);
	if (argc > 3 || *num < 0 || dct_pth_err)
	{
		if (*num == -2)
			write(1, "Dict Error\n", 12);
		else
			write(1, "Error\n", 6);
		return (0);
	}
	return (1);
}
