/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 18:49:15 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/17 18:49:16 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	unsigned int div;
	unsigned int b;

	if (nb <= 2)
	{
		return (0);
	}
	div = 2;
	b = nb;
	while (div <= b)
	{
		if (div == b)
		{
			return (1);
		}
		else if ((b % div) == 0)
		{
			return (0);
		}
		else
		{
			div++;
		}
	}
	return (0);
}
