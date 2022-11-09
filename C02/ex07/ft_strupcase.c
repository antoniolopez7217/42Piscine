/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:44:54 by antlopez          #+#    #+#             */
/*   Updated: 2022/10/30 19:30:09 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

// int main (void)
// {
// 	char str[] = "HELLOwORLD";
// 	ft_strupcase(str);
// 	printf("%s\n", str);
// 	char str2[] = "helloWorLd";
// 	ft_strupcase(str2);
// 	printf("%s\n", str2);
// 	char str3[] = "abcdefghijkl";
// 	ft_strupcase(str3);
// 	printf("%s\n", str3);	
// 	return (0);
// }
