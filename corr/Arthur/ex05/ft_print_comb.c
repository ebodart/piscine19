/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 15:15:00 by agraton           #+#    #+#             */
/*   Updated: 2020/09/09 15:46:08 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_allthewhile(char a, char b, char c)
{
	while (a++ < '7')
	{
		while (b++ < '8')
		{
			while (c++ < '9')
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				if (a != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			c = b + 1;
		}
		b = a + 1;
		c = b + 1;
	}
}

void		ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0' - 1;
	b = '1' - 1;
	c = '2' - 1;
	ft_allthewhile(a, b, c);
}
