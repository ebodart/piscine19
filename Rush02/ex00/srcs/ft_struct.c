/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfilipov <dfilipov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 11:47:36 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/27 18:07:27 by dfilipov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_fcts.h"

int g_index1 = 0;
int g_index2 = 0;

void				ft_number_struct(struct s_nbr_dict *tab,
						char *str, int s, int nl)
{
	int i;

	if (g_index2 != 0)
		g_index2 = g_index2 + 1;
	g_index1 = g_index2;
	while (str[g_index2] != ':' && (s < (nl + 3)))
		g_index2++;
	if (!(tab[s].number_form = malloc(((g_index2 - g_index1) + 1)
		* sizeof(char))))
		return ;
	i = 0;
	while (g_index1 < g_index2)
	{
		tab[s].number_form[i] = str[g_index1];
		g_index1++;
		i++;
	}
	(tab[s].number_form)[i] = '\0';
}

void				ft_char_struct(struct s_nbr_dict *tab, char *str, int s)
{
	int i;
	int fin;

	g_index2 = g_index2 + 2;
	g_index1 = g_index2;
	fin = 0;
	while (str[g_index2] != '\n' && (fin == 0))
	{
		g_index2++;
		if (str[g_index2] == '\0')
		{
			fin = 1;
		}
	}
	if (!(tab[s].char_form = malloc(((g_index2 - g_index1) + 1)
		* sizeof(char))))
		return ;
	i = 0;
	while (g_index1 < g_index2)
	{
		tab[s].char_form[i] = str[g_index1];
		g_index1++;
		i++;
	}
	tab[s].char_form[i] = '\0';
}

int					ft_nbr_nl(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '\n' && str[i - 1] != '\n' && i > 1)
			count++;
		i++;
	}
	return (count);
}

struct s_nbr_dict	*ft_struct(char *str)
{
	struct s_nbr_dict	*tab;
	int					s;
	int					nl;

	nl = ft_nbr_nl(str) + 1;
	if (!(tab = malloc(nl * sizeof(struct s_nbr_dict))))
		return (tab);
	s = 0;
	while (s < nl)
	{
		ft_number_struct(tab, str, s, nl);
		ft_char_struct(tab, str, s);
		s++;
	}
	tab[s].number_form = 0;
	tab[s].char_form = 0;
	g_nbr_struct_items = s;
	g_index1 = 0;
	g_index2 = 0;
	return (tab);
}
