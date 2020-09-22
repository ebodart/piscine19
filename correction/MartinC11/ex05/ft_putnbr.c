/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 19:16:28 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/14 17:04:05 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	unsigned int	unb;
	char			c;

	if (nb < 0)
	{
		write(1, "-", 1);
		unb = -nb;
	}
	else
	{
		unb = nb;
	}
	if (unb < 10)
	{
		c = '0' + unb;
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(unb / 10);
		c = '0' + (unb % 10);
		write(1, &c, 1);
	}
}
