/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 16:35:10 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/17 16:35:11 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	result = 1;
	i = 1;
	if (power < 0)
	{
		return (0);
	}
	while (i <= power)
	{
		if (power == 0)
		{
			return (1);
		}
		else
		{
			result = result * nb;
			i++;
		}
	}
	return (result);
}
