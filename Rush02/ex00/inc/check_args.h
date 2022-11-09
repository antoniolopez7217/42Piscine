/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzaga <lgonzaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 23:26:12 by lgonzaga          #+#    #+#             */
/*   Updated: 2022/11/06 23:26:14 by lgonzaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_ARGS_H
# define CHECK_ARGS_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include "utils.h"

long	ft_atoi(char *str);

void	ft_read_standard_input(long *num, char **path);

int		ft_check_path(char *path);

int		ft_check_args(int argc, char **argv, long *num, char **path);

#endif
