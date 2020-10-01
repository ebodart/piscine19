/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <ebodart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 10:01:19 by ebodart           #+#    #+#             */
/*   Updated: 2020/10/01 11:58:04 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int fin;

	fin = 0;
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			fin = 1;
		i++;
	}
	if (fin == 0)
		return (1);
	i = 0;
	fin = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			fin = 1;
		i++;
	}
	if (fin == 0)
		return (1);
	return (0);
}
