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
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *tab;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	else
	{
		int i;
		int count;
		
		tab = malloc(sizeof(int) * (max - min));
		if (!tab)
			return (-1);
		i = 0;
		count = min;
		while (count < max)
		{
			tab[i] = count;
			count++;
			i++;
		}
		*range = tab;
		return (max - min);
	}
}

int	main(void)
{
	int min;
	int max;
	int i;

	int *range;

	i = 0;
	min = -10;
	max = -4;
	printf("%i\n", (ft_ultimate_range(&range, min, max)));
	while (min < max)
	{
		printf("%i\n", range[i]);
		i++;
		min++;
	}
}