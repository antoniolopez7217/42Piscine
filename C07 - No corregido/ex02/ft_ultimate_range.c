/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:25:51 by antlopez          #+#    #+#             */
/*   Updated: 2022/11/09 15:25:55 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *) malloc((max - min) * sizeof(int *));
	if(*range == NULL)
		return (-1);
	i = 0;
	while (min < max)
		{
			(*range)[i] = min;
			min++;
			i++;
		} 
	return(i);
}

int	main(void)
{
	int **range;
	int min = 3;
	int max = 5;

	printf("%d", ft_ultimate_range(range, min, max));
	return(0);
}