/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:11:44 by antlopez          #+#    #+#             */
/*   Updated: 2022/10/30 19:18:47 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 'a' && str[i] <= 'z')
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}

// int main (void)
// {
// 	int result;
// 	int result2;
// 	int result3;
// 	char str[] = "helLoworld";
// 	result = ft_str_is_lowercase(str);
// 	printf("%d\n", result);
// 	char str2[] = "helloworld";
// 	result2 = ft_str_is_lowercase(str2);
// 	printf("%d\n", result2);
// 	char str3[] = "";
// 	result3 = ft_str_is_lowercase(str3);
// 	printf("%d\n", result3);	
// 	return (0);
// }
