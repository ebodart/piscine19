/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:46:17 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/21 16:46:20 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_taille(min, max)
{
	int taille;

	if (min < 0 && max < 0)
		taille = - min + max;
	else
		taille = max - min;
	return (taille);
}

int	*ft_range(int min, int max)
{
	int *tab;
	int i;
	int count;

	if (min >= max)
		return (0);
	tab = malloc(sizeof(int) * ft_taille(min, max));
	i = 0;
	count = min;
	while (count < max)
	{
		tab[i] = count;
		count++;
		i++;
	}
	return (tab);
}

int	main(void)
{
	int min;
	int max;
	int i;

	i = 0;
	min = -3;
	max = 0;
	while (min < max)
	{
		printf("%i\n", (ft_range(min, max)[i]));
		min++;
	}
}
