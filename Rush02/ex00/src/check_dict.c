/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzaga <lgonzaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 23:22:16 by lgonzaga          #+#    #+#             */
/*   Updated: 2022/11/06 23:22:31 by lgonzaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/check_dict.h"

int	ft_check_raw_dict(char *src)
{
	int	i;

	i = 0;
	if ((src[i] > '9' || src[i] < '0') || src[i] == '\n')
		return (0);
	while ((src[i] <= '9' && src[i] >= '0') || src[i] == '\n')
		i++;
	while (src[i] == ' ' || (src[i] >= 9 && src[i] <= 13))
		i++;
	if (src[i] != ':')
		return (0);
	i++;
	while (src[i] == ' ' || (src[i] >= 9 && src[i] <= 13))
		i++;
	while (src[i] >= 32)
		i++;
	if (src[i] != '\n')
		return (0);
	return (1);
}

int	ft_check_rep(t_dict_entry *dict)
{
	int	i;
	int	j;

	i = 0;
	while (dict[i + 1].num)
	{
		j = i + 1;
		while (dict[j].num)
		{
			if (dict[i].num == dict[j].num)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_check_min_numbers(t_dict_entry *dict, int size)
{
	int	i;

	i = 0;
	while (i < 20)
	{
		if (-1 == ft_is_in_dict(i, dict, size))
			return (0);
		i++;
	}
	while (i <= 100)
	{
		if (-1 == ft_is_in_dict(i, dict, size))
			return (0);
		i = 10 + i;
	}
	if (-1 == ft_is_in_dict(1000, dict, size))
		return (0);
	if (-1 == ft_is_in_dict(1000000, dict, size))
		return (0);
	if (-1 == ft_is_in_dict(1000000000, dict, size))
		return (0);
	return (1);
}

int	ft_check_packed_dict(t_dict_entry *dict, int size)
{
	if (ft_check_rep(dict) == 1 && ft_check_min_numbers(dict, size) == 1)
		return (1);
	else
		return (0);
}
