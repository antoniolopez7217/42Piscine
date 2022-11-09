/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pack_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzaga <lgonzaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 23:23:32 by lgonzaga          #+#    #+#             */
/*   Updated: 2022/11/06 23:23:35 by lgonzaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pack_dict.h"

t_dict_entry	*ft_create_dict(int dict_size)
{
	t_dict_entry	*dict;

	dict = (t_dict_entry *) malloc(dict_size * sizeof(t_dict_entry));
	return (dict);
}

t_dict_entry	*ft_pack_dict(char *str, t_dict_entry *dict)
{
	int				fd;
	char			*buf;
	int				nr_bytes;
	int				dict_size;

	fd = open(str, O_RDONLY);
	nr_bytes = ft_calculate_bufsize(fd);
	buf = (char *) malloc(nr_bytes * sizeof(char));
	close (fd);
	fd = open(str, O_RDONLY);
	read(fd, buf, nr_bytes);
	dict_size = ft_count_lines(buf);
	dict = ft_create_dict(dict_size);
	ft_cleanbuf(buf, dict, dict_size);
	if (ft_check_raw_dict(buf) == 0
		|| ft_check_packed_dict(dict, dict_size) == 0)
		return (NULL);
	free(buf);
	close(fd);
	return (dict);
}
