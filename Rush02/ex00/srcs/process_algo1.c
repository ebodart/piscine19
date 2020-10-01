/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_algo1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfilipov <dfilipov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 13:47:54 by dfilipov          #+#    #+#             */
/*   Updated: 2020/09/27 16:36:00 by dfilipov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fcts.h"

int		is_valid_number(char *number)
{
	int i;

	i = 0;
	while (number[i])
	{
		if (!(number[i] >= '0' && number[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

void	manage_units(char c)
{
	int i;

	i = -1;
	while (1)
	{
		if (ft_strlen(nbr_dic[++i].number_form) == 1)
		{
			if (c == nbr_dic[i].number_form[0])
			{
				ft_putstr(nbr_dic[i].char_form);
				break ;
			}
		}
	}
}

void	manage_hundreds(char c)
{
	int i;

	i = 0;
	if (c != '0')
	{
		manage_units(c);
		ft_putchar(' ');
		while (1)
		{
			if (ft_strlen(nbr_dic[i].number_form) == 3)
			{
				ft_putstr(nbr_dic[i].char_form);
				break ;
			}
			i++;
		}
		ft_putchar(' ');
	}
}

void	ternary_base(int size, char c1, char c2, char c3)
{
	if (size == 1)
		manage_units(c3);
	else if (size == 2)
	{
		if (c2 == '0')
			manage_units(c3);
		else if (c2 < '2')
			manage_10_to_19(c2, c3);
		else
			manage_20_to_90(c2, c3);
	}
	else if (size == 3)
	{
		manage_hundreds(c1);
		if (c2 == '0')
		{
			if (c3 != '0')
				manage_units(c3);
		}
		else if (c2 < '2')
			manage_10_to_19(c2, c3);
		else
			manage_20_to_90(c2, c3);
	}
}

int		is_only_0(char *str, int pos)
{
	int i;

	i = pos + 3;
	while (pos < i)
	{
		if (str[pos] != '0')
			return (0);
		pos++;
	}
	return (1);
}
