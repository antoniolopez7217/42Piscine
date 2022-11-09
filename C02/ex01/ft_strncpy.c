/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:47:08 by antlopez          #+#    #+#             */
/*   Updated: 2022/10/30 19:09:40 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int main (void)
// {
// 	char dest[3] = "Bye";
// 	char src[] = "Hello";

// 	printf("src= %s\ndest= %s\n", src, dest);
// 	ft_strncpy(dest, src, 3);
// 	printf("src= %s\ndest= %s", src, dest);
// 	return (0);
// }
