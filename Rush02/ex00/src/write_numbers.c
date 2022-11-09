/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzaga <lgonzaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 23:23:51 by lgonzaga          #+#    #+#             */
/*   Updated: 2022/11/06 23:23:53 by lgonzaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/write_numbers.h"

void	ft_write_numbers(int number, t_dict_entry *dict)
{
	int	digits;
	int	groups;
	int	*groups_of_hundreds;

	digits = ft_count_digits(number);
	groups = ft_count_groups(digits);
	groups_of_hundreds = ft_groups_of_hundreds(number, groups);
	ft_divide_groups(number, dict);
	free(groups_of_hundreds);
}
