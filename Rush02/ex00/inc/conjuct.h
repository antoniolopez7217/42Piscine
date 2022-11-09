/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conjuct.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzaga <lgonzaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 23:26:46 by lgonzaga          #+#    #+#             */
/*   Updated: 2022/11/06 23:26:48 by lgonzaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONJUCT_H
# define CONJUCT_H

# include <unistd.h>
# include "check_dict.h"
# include "dict_utils.h"
# include "struct.h"

void	ft_putstr(char *str);

void	ft_conjuct(int nbr, t_dict_entry *dict);

#endif
