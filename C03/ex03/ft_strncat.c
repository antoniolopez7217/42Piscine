/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:18:38 by antlopez          #+#    #+#             */
/*   Updated: 2022/10/29 19:24:59 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				len_dest;
	unsigned int	i;

	len_dest = 0;
	while (dest[len_dest])
		len_dest++;
	i = 0;
	while (src[i] && (i < nb))
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
// 	char dest[] = "Hello";
// 	char src[] = " World";

// 	ft_strncat(dest,src, 4);

// 	printf("%s", dest);
// 	return (0);
// }
