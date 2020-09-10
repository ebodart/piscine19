/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 15:29:15 by agraton           #+#    #+#             */
/*   Updated: 2020/09/10 18:47:52 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

int				ft_power(int n, int p)
{
	int			i;
	int			ans;

	i = 0;
	ans = 1;
	while (i++ < p)
		ans = ans * n;
	return (ans);
}

void			ft_putnnbr(long int n, int m)
{
	if (m > 1)
		ft_putnnbr(n / 10, m - 1);
	ft_putchar(n % 10 + '0');
}

long int		ft_check_int(long int n)
{
	int			i;
	int			temp;

	temp = 9;
	i = 0;
	if (n % 10 != 9)
		return (n + 1);
	while (9 - i == temp)
	{
		temp = n / ft_power(10, ++i);
		temp = temp % 10;
	}
	n = n / ft_power(10, i) + 1;
	while (i-- > 0)
		n = 10 * n + (n % 10) + 1;
	return (n);
}

void			ft_print_combn(int t)
{
	long int	n;
	int			i;
	char		c;

	c = 'n';
	i = 0;
	n = 0;
	while (i++ < t - 1)
		n = 10 * n + i;
	while (n / ft_power(10, t - 1) <= 10 - t)
	{
		if (c == 'y')
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		else
			c = 'y';
		ft_putnnbr(n, t);
		n = ft_check_int(n);
	}
}

int		main(void)
{
	ft_print_combn(5);
	return (0);
}
