/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 09:09:36 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/14 09:09:38 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int swap;
	int ordre;

	i = 0;
	while (i < size - 1)
	{
		ordre = 0;
		while (ordre < size - 1 - i)
		{
			while (tab[ordre] > tab[ordre + 1] && i < size - 1)
			{
				swap = tab[ordre + 1];
				tab[ordre + 1] = tab[ordre];
				tab[ordre] = swap;
			}
			ordre++;
		}
		i++;
	}
}
