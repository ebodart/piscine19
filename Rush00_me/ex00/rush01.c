/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 09:40:19 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/12 09:40:21 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	autres_lignes(int *a, int *b, int *c, int *x)
{
	while (*c > 0)
	{
		ft_putchar(' ');
		(*c)--;
	}
	ft_putchar('*');
	ft_putchar('\n');
	(*b)--;
	if (*b == 1)
	{
		ft_putchar('\\');
		*a = *x - 2;
		while (*a > 0)
		{
			ft_putchar('*');
			(*a)--;
		}
		ft_putchar('/');
		ft_putchar('\n');
		(*b)--;
	}
}

void	general(int x, int y)
{
	int a;
	int b;
	int c;

	ft_putchar('/');
	a = x - 2;
	b = y;
	while (a > 0)
	{
		ft_putchar('*');
		a--;
	}
	ft_putchar('\\');
	ft_putchar('\n');
	b--;
	while (b > 1)
	{
		ft_putchar('*');
		c = x - 2;
		autres_lignes(&a, &b, &c, &x);
	}
}

void	exception1(int y)
{
	int b;

	ft_putchar('/');
	ft_putchar('\n');
	b = y;
	b--;
	while (b > 1)
	{
		ft_putchar('*');
		ft_putchar('\n');
		b--;
	}
	if (b == 1)
	{
		ft_putchar('\\');
		b--;
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	else if (x >= 2)
	{
		general(x, y);
	}
	else
		exception1(y);
}
