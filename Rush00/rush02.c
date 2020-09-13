/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 14:09:09 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/12 14:51:52 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void			ft_putchar(char c);

/*
** Each rush_XX_row functions takes 2 variables:
** *str ==> a string large enough to contain the whole row in char
** width ==> The Width asked by the user.
** It then loops throught the row, writing the correct character in str
** as it goes allong
** Finaly, it returns str to the rush fuction.
*/

char			*rush_first_row(char *str, int width, int toobig, int i)
{
	while (++i < width)
	{
		if (i == 0 || i == width -1)
		{
			if (toobig)
				ft_putchar('A');
			else
				str[i] = 'A';
		}
		else
		{
			if (toobig)
				ft_putchar('B');
			else
				str[i] = 'B';
		}
	}
	return (str);
}

char			*rush_middle_row(char *str, int width, int toobig, int i)
{
	while (++i < width)
	{
		if (i == 0 || i == width - 1)
		{
			if (toobig)
				ft_putchar('B');
			else
				str[i] = 'B';
		}
		else
		{
			if (toobig)
				ft_putchar(' ');
			else
				str[i] = ' ';
		}
	}
	return (str);
}

char			*rush_last_row(char *str, int width, int toobig, int i)
{
	while (++i < width)
	{
		if (i == 0 || i == width -1)
		{
			if (toobig)
				ft_putchar('C');
			else
				str[i] = 'C';
		}
		else
		{
			if (toobig)
				ft_putchar('B');
			else
				str[i] = 'B';
		}
	}
	return (str);
}

/*
** The rush function will loop through every row.
** For each row, it'll call the appropriate rush_XX_row fucntion
** and print out what that function returns followed by a \n
*/

void			rush(int width, int height)
{
	int			i;
	char		str[(width > 2000000) ? 0 : width];
	int			toobig;

	toobig = 0;
	if (width > 2000000)
		toobig = 1;
	if (width <= 0 || height <= 0)
		return ;
	i = 0;
	while (++i <= height)
	{
		if (i == 1)
			write(1, rush_first_row(str, width, toobig, -1), (toobig) ? 0 : width);
		else if (i == height)
			write(1, rush_last_row(str, width, toobig, -1), (toobig) ? 0 : width);
		else
			write(1, rush_middle_row(str, width, toobig, -1), (toobig ) ? 0 : width);
		ft_putchar('\n');
	}
}
