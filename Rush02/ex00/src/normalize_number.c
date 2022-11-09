/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize_number.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzaga <lgonzaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 23:22:58 by lgonzaga          #+#    #+#             */
/*   Updated: 2022/11/06 23:23:00 by lgonzaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/normalize_number.h"

int	ft_count_digits(long num)
{
	int	i;

	i = 0;
	if (num == 0)
		return (1);
	while (num > 0)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

int	ft_count_groups(int digits)
{
	int	groups;

	groups = digits / 3;
	if (digits % 3 > 0)
		groups++;
	return (groups);
}

int	ft_exp_hundreds(int exp)
{
	int	i;
	int	num;

	i = 1;
	num = 1;
	while (i < exp)
	{
		num = num * 1000;
		i++;
	}
	return (num);
}

int	*ft_groups_of_hundreds(long number, int groups)
{
	int	i;
	int	j;
	int	*groups_of_hundreds;

	i = 0;
	groups_of_hundreds = malloc((groups - 1) * sizeof(int));
	while (i <= groups)
	{
		j = 0;
		groups_of_hundreds[i] = (number / ft_exp_hundreds(groups - i)) % 1000;
		i++;
	}
	return (groups_of_hundreds);
}
