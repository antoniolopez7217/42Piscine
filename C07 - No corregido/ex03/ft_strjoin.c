/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:16:59 by antlopez          #+#    #+#             */
/*   Updated: 2022/11/09 16:17:02 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_arraylen(char *strs)
{
	int len;
	int i;

	i = 0;	
	len = 0;
	while ((strs)[i])
	{
		while (strs[len])
			len++;
	i++;
	}
	return (len);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int i;
	int	j;
	int k;
	char *solution;

	i = 0;
	if (size == 0)
		{
			solution = (char *) malloc(sizeof(char));
			solution[0] = '\0';
			return (solution);
		}
	solution = (char *) malloc(ft_arraylen(strs) * size * sizeof(char));
	j = 0;
	while((*strs)[j])
	{
		i = 0;
		while (strs[i])
		{
			solution[i] = strs[i];
			i++;
		}
		k = 0;
		while(sep[i])
		{
			solution[i] = sep[k];
			i++;
			k++;
		}
		j++;
	}
}

