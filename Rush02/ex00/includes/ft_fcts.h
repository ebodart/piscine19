/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fcts.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfilipov <dfilipov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 18:04:29 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/27 18:01:09 by dfilipov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FCTS_H
# define FT_FCTS_H

void				ft_putchar(char c);

void				ft_putstr(char *str);

int					ft_strcmp(char *s1, char *s2);

int					ft_strlen(char *str);

void				ft_swap(int *a, int *b);

void				ft_putnbr(int nb);

int					ft_atoi(char *str);

char				**ft_split(char *str, char *charset);

void				cut_all_digits(char *number);

void				manage_all_3(char *number, int input_size,
						int pos, int nbr_mod);

void				manage_20_to_90(char c1, char c2);

void				manage_10_to_19(char c1, char c2);

int					is_only_0(char *str, int pos);

void				ternary_base(int size, char c1, char c2, char c3);

void				manage_hundreds(char c);

void				manage_units(char c);

int					is_valid_number(char *number);

struct s_nbr_dict	*ft_struct(char *str);

struct s_nbr_dict	*ft_create_dict(void);

struct s_nbr_dict	*nbr_dic;

int					g_nbr_struct_items;

struct				s_nbr_dict {
	char			*number_form;
	char			*char_form;
};

#endif
