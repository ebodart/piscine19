/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 18:16:57 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/17 18:16:58 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int a;
	unsigned int b;

	if (nb < 0)
	{
		return (0);
	}
	a = nb;
	b = nb;
	while (a >= 0)
	{
		if (((a * a) != b) && (a > 0))
		{
			a--;
		}
		else if ((a * a) == b)
		{
			return (a);
		}
		else
			return (0);
	}
	return (0);
}