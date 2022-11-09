/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzaga <lgonzaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 23:22:37 by lgonzaga          #+#    #+#             */
/*   Updated: 2022/11/06 23:22:40 by lgonzaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/dict_utils.h"

long int	ft_atoi_checked(char *str, int start)
{
	int			index;
	long int	result;

	index = start;
	result = 0;
	while (str[index] >= '0' && str[index] <= '9')
	{
		result = result * 10 + (str[index] - 48);
		index++;
	}
	return (result);
}

char	*ft_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (i < (n - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_is_in_dict(int num, t_dict_entry *dict, int size)
{
	int	i;
	int	index;

	index = -1;
	i = 0;
	while (i < size)
	{
		if (num == dict[i].num)
		{
			index = i;
			break ;
		}
		i++;
	}
	return (index);
}
