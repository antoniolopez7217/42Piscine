/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 10:40:31 by antlopez          #+#    #+#             */
/*   Updated: 2022/10/29 19:19:38 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	len_dest;
	int	i;

	len_dest = 0;
	while (dest[len_dest] != '\0')
		len_dest++;
	i = 0;
	while (src[i])
	{
		dest[len_dest] = src[i];
		i++;
		len_dest++;
	}
	dest[len_dest] = '\0';
	return (dest);
}

// int main(void)
// {
// 	char dest[] = "Hello ";
// 	char src[] = "World";

// 	ft_strcat(dest,src);

// 	printf("%s", dest);
// 	return (0);
// }
