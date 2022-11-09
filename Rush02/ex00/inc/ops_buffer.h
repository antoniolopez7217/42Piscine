/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_buffer.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzaga <lgonzaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 23:27:16 by lgonzaga          #+#    #+#             */
/*   Updated: 2022/11/06 23:27:18 by lgonzaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPS_BUFFER_H
# define OPS_BUFFER_H

# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include "dict_utils.h"
# include "struct.h"

int		ft_count_lines(char *buf);

int		ft_calculate_bufsize(int fd);

void	ft_while_buf(char *buf, t_dict_entry *dict, int *i, int *lines);

void	ft_cleanbuf(char *buf, t_dict_entry *dict, int dict_size);

#endif
