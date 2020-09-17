/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 17:35:10 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/17 17:35:14 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int a;

	a = index;
	if (a < 0)
	{
		return (-1);
	}
	else if (a == 0)
	{
		return (0);
	}
	else if (a == 1)
	{
		return (1);
	}
	else
	{
		return ((ft_fibonacci(a - 1)) + (ft_fibonacci(a - 2)));
	}
}
