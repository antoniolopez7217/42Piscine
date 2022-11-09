/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interpret_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzaga <lgonzaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 23:22:45 by lgonzaga          #+#    #+#             */
/*   Updated: 2022/11/06 23:22:48 by lgonzaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/interpret_num.h"

void	ft_interpret_num(int group_h, int groups, int i, t_dict_entry *dict)
{
	if (group_h > 99)
	{
		ft_conjuct(group_h / 100, dict);
		ft_conjuct(100, dict);
	}
	if ((group_h % 100) <= 20 && (group_h % 100) > 0)
		ft_conjuct(group_h % 100, dict);
	else
	{
		if ((group_h / 10) % 10 > 0)
			ft_conjuct((group_h % 100) - (group_h % 10), dict);
		if (group_h % 10 > 0)
			ft_conjuct(group_h % 10, dict);
	}
	if (groups >= 2 && i < (groups - 1) && group_h > 0)
	{
		if (i >= groups / 2)
			ft_conjuct(ft_exp_hundreds(groups - i), dict);
		else
			ft_conjuct(ft_exp_hundreds((i - groups) * -1), dict);
	}
}

void	ft_divide_groups(int number, t_dict_entry *dict)
{
	int	i;
	int	groups;
	int	*group_h;

	i = 0;
	groups = ft_count_groups(ft_count_digits(number));
	group_h = ft_groups_of_hundreds(number, groups);
	if (groups == 1 && group_h[0] == 0)
		ft_conjuct(group_h[0], dict);
	else
	{
		while (i < groups)
		{			
			ft_interpret_num(group_h[i], groups, i, dict);
			i++;
		}
	}
}
