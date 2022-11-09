/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:14:04 by antlopez          #+#    #+#             */
/*   Updated: 2022/10/30 19:37:49 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

// int main (void)
// {
// 	char str[] = "HELLOwORLD";
// 	ft_strlowcase(str);
// 	printf("%s\n", str);
// 	char str2[] = "heLLoWorLd";
// 	ft_strlowcase(str2);
// 	printf("%s\n", str2);
// 	char str3[] = "aBCDEfGhiJkl";
// 	ft_strlowcase(str3);
// 	printf("%s\n", str3);	
// 	return (0);
// }
