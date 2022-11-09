/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pack_dict.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzaga <lgonzaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 23:27:20 by lgonzaga          #+#    #+#             */
/*   Updated: 2022/11/06 23:27:22 by lgonzaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PACK_DICT_H
# define PACK_DICT_H

# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include "ops_buffer.h"
# include "check_dict.h"
# include "struct.h"

t_dict_entry	*ft_create_dict(int dict_size);

int				ft_pack_dict(char *str, t_dict_entry *dict);

#endif
