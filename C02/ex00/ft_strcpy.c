/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:42:29 by antlopez          #+#    #+#             */
/*   Updated: 2022/10/30 19:02:52 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main (void)
// {
// 	char dest[] = "Hi";
// 	char src[] = "Hello";

// 	printf("src= %s\ndest= %s\n", src, dest);
// 	ft_strcpy(dest, src);
// 	printf("src= %s\ndest= %s", src, dest);
// 	return (0);
// }
