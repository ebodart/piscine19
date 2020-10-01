/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_load_buffer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorre <mmorre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 13:59:52 by mmorre            #+#    #+#             */
/*   Updated: 2020/09/29 13:59:59 by mmorre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"
#include "ft_file.h"
#include <stdlib.h>

char    *ft_setup_buffer(char *path)
{
	char				*buffer;
	t_file_infos		*length;
	int					file;

	file = ft_open_file(path);
	length = ft_get_file_length(path);
	ft_close_file(file);
	file = ft_open_file(path);
	buffer = ft_get_file_buffer(file, length->nb_char);
	ft_close_file(file);
	return (buffer);
}