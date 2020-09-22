/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 14:05:15 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/20 14:18:35 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *r;

	if (!(r = malloc(length * sizeof(int))))
		return (0);
	i = -1;
	while (++i < length)
		r[i] = f(tab[i]);
	return (r);
}
