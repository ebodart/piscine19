/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 19:13:40 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/17 19:13:41 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int	ft_find_next_prime(int nb)
{
	unsigned a;

	a = nb;
	while ((ft_is_prime(a)) == 0)
	{
		a++;
	}
	return (a);
}

int	main(void)
{
	printf("%i", ft_find_next_prime(-100000));
}


