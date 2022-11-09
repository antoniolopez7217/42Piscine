/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzaga <lgonzaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 23:22:51 by lgonzaga          #+#    #+#             */
/*   Updated: 2022/11/06 23:22:54 by lgonzaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "../inc/process_dict.h"
#include "../inc/interpreter.h"
#include "../inc/input.h"

int	main(int argc, char **argv)
{
	long			num;
	char			*path;
	int				arg_result;
	t_dict_entry	*dict;

	dict = NULL;
	num = 0;
	arg_result = ft_check_args(argc, argv, &num, &path);
	if (arg_result)
	{	
		if (ft_pack_dict(path, dict) != 0)
		{
			dict = ft_pack_dict(path, dict);
			ft_divide_groups(num, dict);
		}
		else
			write(1, "Error\n", 6);
		if (argc != 3)
			free(path);
		return (1);
	}
	return (0);
}
