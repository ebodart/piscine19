/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorre <mmorre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 10:36:29 by mmorre            #+#    #+#             */
/*   Updated: 2020/09/29 10:48:48 by mmorre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	int	a;
	char		c;

	a = nb;
	if (a < 0)
	{
		write(1, "-", 1);
		a = -a;
	}
	if (a >= 10)
	{
		ft_putnbr(a / 10);
	}
	c = a % 10 + '0';
	write(1, &c, 1);
}