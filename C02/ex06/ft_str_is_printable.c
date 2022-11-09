/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:29:42 by antlopez          #+#    #+#             */
/*   Updated: 2022/10/30 19:22:35 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 32 && str[i] <= 126)
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
// 	char str[] = "HELLOw{OR~LD";
// 	result = ft_str_is_printable(str);
// 	printf("%d\n", result);
// 	char str2[] = "HELLOWO@∞¢RLD";
// 	result2 = ft_str_is_printable(str2);
// 	printf("%d\n", result2);
// 	char str3[] = "";
// 	result3 = ft_str_is_printable(str3);
// 	printf("%d\n", result3);	
// 	return (0);
// }
