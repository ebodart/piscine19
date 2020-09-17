/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 15:46:17 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/17 15:46:18 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int a;

	a = nb;
	if (a == 0)
		return (1);
	else if (a < 0)
	{
		return (0);
	}
	else
		return (a * ft_recursive_factorial(a - 1));
}
