/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 21:01:22 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/13 21:01:25 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int swap;

	i = 0;
	while (i < size / 2)
	{
		swap = tab[size - i - 1];
		tab[size - i - 1] = tab[i];
		tab[i] = swap;
		i++;
	}
}
