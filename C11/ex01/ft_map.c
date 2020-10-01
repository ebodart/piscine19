/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <ebodart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 08:50:41 by ebodart           #+#    #+#             */
/*   Updated: 2020/10/01 10:56:28 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *map;

	i = 0;
	if (!(map = malloc(sizeof(int) * length)))
		return (0);
	while (i < length)
	{
		map[i] = f(tab[i]);
		i++;
	}
	return (map);
}
