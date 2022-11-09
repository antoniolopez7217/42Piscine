/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:19:32 by antlopez          #+#    #+#             */
/*   Updated: 2022/10/30 19:20:22 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 'A' && str[i] <= 'Z')
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
// 	char str[] = "HELLOwORLD";
// 	result = ft_str_is_uppercase(str);
// 	printf("%d\n", result);
// 	char str2[] = "HELLOWORLD";
// 	result2 = ft_str_is_uppercase(str2);
// 	printf("%d\n", result2);
// 	char str3[] = "";
// 	result3 = ft_str_is_uppercase(str3);
// 	printf("%d\n", result3);	
// 	return (0);
// }
