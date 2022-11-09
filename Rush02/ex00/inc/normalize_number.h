/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize_number.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzaga <lgonzaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 23:27:10 by lgonzaga          #+#    #+#             */
/*   Updated: 2022/11/06 23:27:12 by lgonzaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NORMALIZE_NUMBER_H
# define NORMALIZE_NUMBER_H

# include <stdlib.h>

int	ft_count_digits(long num);

int	ft_count_groups(int digits);

int	ft_exp_hundreds(int exp);

int	*ft_groups_of_hundreds(long number, int groups);

#endif
