/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:30:37 by antlopez          #+#    #+#             */
/*   Updated: 2022/10/30 19:40:12 by antlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alphanum(char *str)
{
	int	i;

	i = 0;
	if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		return (0);
	else if (str[i] >= '0' && str[i] <= '9')
		return (1);
	else
		return (2);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
	return (str);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'A' && str[i] <= 'Z')
		str[i] = str[i] + 32;
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_str_is_alphanum(&str[i]) == 0)
		{
			if (i == 0)
				str[i] = *ft_strupcase(&str[i]);
			else
			{
				if (ft_str_is_alphanum(&str[i - 1]) <= 1)
					str[i] = *ft_strlowcase(&str[i]);
				else
					str[i] = *ft_strupcase(&str[i]);
			}
		}
		i++;
	}
	return (str);
}

// int main (void)
// {
// 	char str[] = "HELLO wORLD";
// 	ft_strcapitalize(str);
// 	printf("%s\n", str);
// 	char str2[] = "heLLo W42or ld";
// 	ft_strcapitalize(str2);
// 	printf("%s\n", str2);
// 	char str3[] = "salut, comment tu vas ? 
// 	42mots quarante-deux; cinquante+et+un";
// 	ft_strcapitalize(str3);
// 	printf("%s\n", str3);	
// 	return (0);
// }
