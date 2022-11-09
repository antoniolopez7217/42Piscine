/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:02:13 by antlopez          #+#    #+#             */
/*   Updated: 2022/10/30 19:16:07 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
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
// 	char str[] = "2Hello6World";
// 	result = ft_str_is_numeric(str);
// 	printf("%d\n", result);
// 	char str2[] = "13789";
// 	result2 = ft_str_is_numeric(str2);
// 	printf("%d\n", result2);
// 	char str3[] = "";
// 	result3 = ft_str_is_numeric(str3);
// 	printf("%d\n", result3);	
// 	return (0);
// }
