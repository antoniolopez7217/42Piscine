/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interpret_num.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzaga <lgonzaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 23:27:00 by lgonzaga          #+#    #+#             */
/*   Updated: 2022/11/06 23:27:02 by lgonzaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERPRET_NUM_H
# define INTERPRET_NUM_H

# include "struct.h"
# include "check_dict.h"
# include "conjuct.h"
# include "normalize_number.h"

void	ft_interpret_num(int group_h, int groups, int i, t_dict_entry *dict);

void	ft_divide_groups(int number, t_dict_entry *dict);

#endif
