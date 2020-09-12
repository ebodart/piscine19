/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 16:04:41 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/12 16:04:44 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_comb2(char a2, char b2, char c2, char d2)
{
	ft_putchar(a2);
	ft_putchar(b2);
	ft_putchar(' ');
	ft_putchar(c2);
	ft_putchar(d2);
	if ((a2 == '9') && (b2 == '8') && (c2 == '9') && (d2 == '9'))
		return ;
	else
	{
		write(1, ", ", 2);
	}
}

void	transf_char(int a, int b, int c, int d)
{
	char a2;
	char b2;
	char c2;
	char d2;

	a2 = '0' + a;
	b2 = '0' + b;
	c2 = '0' + c;
	d2 = '0' + d;
	print_comb2(a2, b2, c2, d2);
}

void	print_int(int nbr1, int nbr2, int d, int b)
{
	int a;
	int c;

	if ((nbr2 <= 9) && (nbr1 <= 9))
	{
		a = 0;
		c = 0;
	}
	else if ((nbr2 <= 9) && (nbr1 > 9))
	{
		a = nbr1 / 10;
		c = 0;
	}
	else if ((nbr1 <= 9) && (nbr2 > 9))
	{
		a = 0;
		c = nbr2 / 10;
	}
	else
	{
		a = nbr1 / 10;
		c = nbr2 / 10;
	}
	transf_char(a, b, c, d);
}

void	ft_print_comb2(void)
{
	int nbr1;
	int nbr2;
	int d;
	int b;

	nbr1 = 0;
	nbr2 = 1;
	while (nbr1 <= 99)
	{
		while (nbr2 <= 99)
		{
			d = nbr2 % 10;
			b = nbr1 % 10;
			if (nbr1 < nbr2)
				print_int(nbr1, nbr2, d, b);
			nbr2++;
		}
		nbr2 = 0;
		nbr1++;
	}
}
