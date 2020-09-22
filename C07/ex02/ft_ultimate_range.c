/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 09:17:26 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/22 09:17:28 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int i;
	int count;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	else
	{
		tab = malloc(sizeof(int) * (max - min));
		if (!tab)
			return (-1);
		i = 0;
		count = min;
		while (count < max)
		{
			tab[i] = count;
			i++;
			count++;
		}
		*range = tab;
		return (max - min);
	}
}
