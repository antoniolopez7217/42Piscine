/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 21:09:47 by antlopez          #+#    #+#             */
/*   Updated: 2022/10/30 19:42:00 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  #include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_src;

	len_src = 0;
	i = 0;
	while (src[len_src])
		len_src++;
	if (size != 0)
	{	
		while (i < (size - 1) && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len_src);
}

// int main (void)
// {
// 	char dest[4] = "By0e";
// 	char src[5] = "Hello";
// 	unsigned int len;

// 	printf("src= %s\ndest= %s\n", src, dest);
// 	len = ft_strlcpy(dest, src, 3);
// 	printf("src= %s\ndest= %s\n", src, dest);
// 	printf("len_src= %d", len);
// 	return (0);
// }
