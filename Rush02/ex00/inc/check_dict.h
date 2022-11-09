/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dict.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzaga <lgonzaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 23:26:31 by lgonzaga          #+#    #+#             */
/*   Updated: 2022/11/06 23:26:33 by lgonzaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_DICT_H
# define CHECK_DICT_H

# include "struct.h"
# include "dict_utils.h"

int	ft_check_raw_dict(char *src);

int	ft_check_rep(t_dict_entry *dict);

int	ft_check_min_numbers(t_dict_entry *dict, int size);

int	ft_check_packed_dict(t_dict_entry *dict, int size);

#endif
