/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:17:16 by antlopez          #+#    #+#             */
/*   Updated: 2022/10/30 19:12:55 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
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
// 	char str[] = "HelloWorld";
// 	result = ft_str_is_alpha(str);
// 	printf("%d\n", result);
// 	char str2[] = "Hel6loWor?ld";
// 	result2 = ft_str_is_alpha(str2);
// 	printf("%d\n", result2);
// 	char str3[] = "";
// 	result3 = ft_str_is_alpha(str3);
// 	printf("%d\n", result3);	
// 	return (0);
// }
