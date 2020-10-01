/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorre <mmorre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 09:49:17 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/30 18:57:10 by mmorre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FCTS_H
# define FT_FCTS_H

# define DEFAULT_FILE "example_file.txt"

void				ft_putchar(char c);

void				ft_putstr(char *str);

int					ft_strcmp(char *s1, char *s2);

int					ft_strlen(char *str);

void				ft_swap(int *a, int *b);

void				ft_putnbr(int nb);

int					ft_atoi(char *str);

int					ft_strlen0(char *str);

int					ft_nbrlen(char *str);

char		        *ft_get_file_buffer(int file, int length);

int		            ft_open_file(char *path);

int		            ft_close_file(int file);

void                ft_coord(char *buf);

int                 ft_map_error(char *buf);

int                 *ft_binary(int val, char *list, int nb_char);
int                 *ft_map_int(char *buf);

#endif
