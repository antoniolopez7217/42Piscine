/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_buffer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzaga <lgonzaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 23:23:06 by lgonzaga          #+#    #+#             */
/*   Updated: 2022/11/06 23:24:54 by lgonzaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ops_buffer.h"

int	ft_count_lines(char *buf)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (buf[i] != '\0')
	{
		if (buf[i] == '\n')
			if (i != 0 && buf[i - 1] != '\n')
				count++;
		i++;
	}
	return (count + 1);
}

int	ft_calculate_bufsize(int fd)
{
	int		i;
	char	*temp_buf;

	temp_buf = (char *) malloc(sizeof(char) * 1);
	i = 0;
	while (read(fd, temp_buf, 1))
		i++;
	free (temp_buf);
	return (i);
}

void	ft_cleanbuf(char *buf, t_dict_entry *dict, int dict_size)
{
	int	i;
	int	lines;
	int	j;

	lines = 0;
	i = 0;
	j = 0;
	while (lines < dict_size)
	{
		while (buf[i] >= '0' && buf[i] <= '9')
		{
			if (buf[i + 1] == ' ' || buf[i + 1] == ':')
				dict[lines].num = ft_atoi_checked(buf, j);
			i++;
		}
		while (buf[i] == ' ' || buf[i] == ':')
			i++;
		j = i;
		while (buf[j] >= 32 && buf[j] <= 126)
		{
			if (buf[j + 1] == '\0' || buf[j + 1] == '\n')
			{
				dict[lines].str = (char *) malloc(sizeof(char) * (j - i + 2));
				ft_strncpy(dict[lines].str, &buf[i], (j - i + 2));
				dict[lines].size = dict_size;
				lines++;
				j += 2;
				break ;
			}
			j++;
		}
		i = j;
	}
}
