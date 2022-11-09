/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conjuct.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzaga <lgonzaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 23:22:23 by lgonzaga          #+#    #+#             */
/*   Updated: 2022/11/06 23:22:28 by lgonzaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/conjuct.h"

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, str, 1);
		str++;
	}
	write(1, " ", 1);
}

void	ft_conjuct(int nbr, t_dict_entry *dict)
{
	int				n;
	int				size;

	size = dict[0].size;
	n = ft_is_in_dict(nbr, dict, size);
	ft_putstr(dict[n].str);
}
