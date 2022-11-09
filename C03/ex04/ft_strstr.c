/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:29:34 by antlopez          #+#    #+#             */
/*   Updated: 2022/10/29 20:07:17 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while ((str[i + j] == to_find[j]) && str[i + j])
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	char s1[] = "Hello World ?";
// 	char s2[] = "elloZ";
// 	char s3[] = "World";
// 	printf("%s\n", ft_strstr(s1, s2));
// 	printf("%s\n", ft_strstr(s1, s3));
// 	printf("%s\n", ft_strstr(s2, s3));
// }
