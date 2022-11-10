/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:37:18 by antlopez          #+#    #+#             */
/*   Updated: 2022/11/09 13:37:20 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *str;
	int i;

	if(min >= max)
		return (0);
	str = (int *) malloc((max - min) * sizeof(int));
	i = 0;
	while (min < max)
	{
		str[i] = min;
		min++;
		i++;
	}
	return(str);
}

int	main(void)
{
	int min = -1;
	int max = 5;
	int i = 0;
	int min_aux = min;
	
	while (min_aux < max)
	{
		printf("%d", ft_range(min, max)[i]);
		i++;
		min_aux++;
	}
	return(0);
}