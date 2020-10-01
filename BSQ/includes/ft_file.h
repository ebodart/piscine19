/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorre <mmorre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 13:57:36 by mmorre            #+#    #+#             */
/*   Updated: 2020/09/29 14:26:11 by mmorre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FILE_H
# define FT_FILE_H

typedef struct s_file_infos
{
	int     lines;
	int     nb_char;
}              t_file_infos;

typedef	struct s_file
{
	char	empty;
	char	obstacle;
	char	full;
}			t_file;


char                *ft_setup_buffer(char *path);
struct s_file_infos	*ft_get_file_length(char *path);
char                 *ft_setup_buffer(char *path);

struct s_file_infos	*ft_get_file_lenght(char *path);

#endif

