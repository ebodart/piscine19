/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_algo2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfilipov <dfilipov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 13:47:56 by dfilipov          #+#    #+#             */
/*   Updated: 2020/09/27 16:00:14 by dfilipov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fcts.h"

void	manage_10_to_19(char c1, char c2)
{
	int i;

	i = -1;
	while (1)
	{
		if (ft_strlen(nbr_dic[++i].number_form) == 2)
		{
			if (c1 == nbr_dic[i].number_form[0] &&
				c2 == nbr_dic[i].number_form[1])
			{
				ft_putstr(nbr_dic[i].char_form);
				break ;
			}
		}
	}
}

void	manage_20_to_90(char c1, char c2)
{
	int i;

	i = -1;
	while (1)
	{
		if (ft_strlen(nbr_dic[++i].number_form) == 2)
		{
			if (c1 == nbr_dic[i].number_form[0])
			{
				ft_putstr(nbr_dic[i].char_form);
				if (c2 != '0')
				{
					ft_putchar('-');
					manage_units(c2);
				}
				break ;
			}
		}
	}
}

void	manage_all_3(char *number, int input_size, int pos, int nbr_mod)
{
	int i;
	int j;

	i = -1;
	while (++i < (input_size - 1) / 3)
	{
		pos = nbr_mod + (i * 3);
		if (!is_only_0(number, pos - 3))
		{
			ft_putchar(' ');
			j = -1;
			while (1)
			{
				if ((ft_strlen(nbr_dic[++j].number_form) ==
					(input_size - (nbr_mod - 1) - i * 3)))
				{
					ft_putstr(nbr_dic[j].char_form);
					ft_putchar(' ');
					break ;
				}
			}
		}
		ternary_base(3, number[pos], number[pos + 1], number[pos + 2]);
	}
}

void	cut_all_digits(char *number)
{
	int input_size;
	int nbr_mod;
	int pos;

	pos = 0;
	input_size = ft_strlen(number);
	nbr_mod = input_size % 3;
	if (!nbr_mod)
		nbr_mod = 3;
	if (nbr_mod == 1)
		ternary_base(nbr_mod, '0', '0', number[0]);
	else if (nbr_mod == 2)
	{
		if (number[0] != '0')
			ternary_base(nbr_mod, '0', number[0], number[1]);
		else
			ternary_base(nbr_mod, '0', '0', number[1]);
	}
	else
		ternary_base(nbr_mod, number[0], number[1], number[2]);
	manage_all_3(number, input_size, pos, nbr_mod);
}
