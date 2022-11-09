/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:54:21 by antlopez          #+#    #+#             */
/*   Updated: 2022/10/29 18:59:48 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

// int main(void)
// {
// 	char s1[] = "Hello World";
// 	char s2[] = "Hello Zorld";
// 	char s3[] = "Hello World";
// 	int prueba_1 = ft_strcmp(s1, s3);
// 	int prueba_2 = ft_strcmp(s1, s2);
// 	int prueba_3 = ft_strcmp(s2, s1);
// 	printf("%d\n", prueba_1);
// 	printf("%d\n", prueba_2);
// 	printf("%d\n", prueba_3);
// }
