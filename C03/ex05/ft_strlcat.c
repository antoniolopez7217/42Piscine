/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 23:06:13 by antlopez          #+#    #+#             */
/*   Updated: 2022/10/31 16:53:02 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <strings.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	i;
	unsigned int	j;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size == 0 || size <= len_dest)
		return (len_src + size);
	i = len_dest;
	j = 0;
	while (src[j] && j < (size - len_dest - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (len_dest + len_src);
}

// int main(void)
// {
// 	char src[] = "World";
// 	char dest[20] = "Hello";
// 	char dest2[20] = "Hello";

// 	printf("len= %d\n", ft_strlcat(dest, src, 20));
// 	printf("src= %s\ndest= %s\n", src, dest);
// 	printf("len= %lu\n", strlcat(dest2, src, 20));
// 	printf("src= %s\ndest2= %s\n", src, dest);

// 	return (0);
// }
