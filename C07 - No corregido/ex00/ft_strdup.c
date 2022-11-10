/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:20:58 by antlopez          #+#    #+#             */
/*   Updated: 2022/11/09 13:21:01 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
	char    *str;
	int     i;

	i = 0;
	while(src[i])
		i++;
	str = (char *) malloc(i * sizeof(char));
	i = 0;
	while (src[i])
	{
		str[i] = src[i]; 
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	main(void)
{
	char src[5] = "Hola.";

	printf("%s", ft_strdup(src));
	return(0);
}