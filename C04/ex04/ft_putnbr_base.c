/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 09:04:10 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/17 09:04:13 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		erreur(char *base)
{
	int comp1;
	int comp2;

	comp2 = 1;
	comp1 = 0;
	if ((base[0] == '\0') || (base[1] == '\0'))
		return (0);
	while (base[comp1])
	{
		if ((base[comp2] == '+') || (base[comp2] == '-'))
			return (0);
		while (base[comp2])
		{
			if (base[comp1] == base[comp2])
				return (0);
			comp2++;
		}
		comp1++;
		comp2 = comp1 + 1;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			count;
	long int	a;
	int			transf;

	count = 0;
	a = nbr;
	if (erreur(base) == 0)
		return ;
	while (base[count])
		count++;
	if (a < 0)
	{
		ft_putchar('-');
		a = -a;
	}
	if (a >= count)
		ft_putnbr_base(a / count, base);
	transf = a % count;
	ft_putchar(base[transf]);
}
