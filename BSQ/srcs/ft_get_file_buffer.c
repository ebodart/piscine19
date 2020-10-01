/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_file_buffer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <ebodart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 13:59:24 by mmorre            #+#    #+#             */
/*   Updated: 2020/09/29 15:57:42 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "ft_file.h"
#include "ft_h.h"

struct s_file_infos     *ft_get_file_length(char *path)
{
	int		t;
	int     index;
	int		lines;
	char	*temp;
	int		file;
	t_file_infos	*file_infos;
	
	lines = 0;
	file = ft_open_file(path);
	file_infos = malloc(sizeof(t_file_infos));
	if(!(temp = malloc(sizeof(char))))
		return (NULL);
	index = 0;
	while((t = read(file, temp, 1)) > 0)
	{
		index++;
		if(!ft_strcmp(temp, "\n"))
			lines++;
	}
	file_infos->lines = lines;
	file_infos->nb_char = index;
	free(temp);
	return (file_infos);
}

char		*ft_get_file_buffer(int file, int length)
{
	char *content;
	int	i;
	char temp[1];
	int j;

	j = 0;
	if(!(content = malloc(length * sizeof(char))))
		return (NULL);
	while ((i = read(file,temp, 1)) > 0)
	{
		content[j] = *temp;
		j++;
	}
	content[j] = '\n';
	return (content);
}
