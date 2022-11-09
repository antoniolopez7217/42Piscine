/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_utils.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzaga <lgonzaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 23:26:50 by lgonzaga          #+#    #+#             */
/*   Updated: 2022/11/06 23:26:52 by lgonzaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_UTILS_H
# define DICT_UTILS_H

# include "struct.h"
# include "check_dict.h"

long int	ft_atoi_checked(char *str, int start);

char		*ft_strncpy(char *dest, char *src, int n);

int			ft_is_in_dict(int num, t_dict_entry *dict, int size);

#endif
