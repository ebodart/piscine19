/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <ebodart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 14:48:02 by ebodart           #+#    #+#             */
/*   Updated: 2020/10/01 15:15:22 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char *swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_ordre(int count, char **tab, int (*cmp)(char *, char *))
{
	int		ordre;
	char	*swap;
	int		i;

	i = 0;
	while (i < count)
	{
		ordre = 0;
		while (ordre < count - 1)
		{
			if (cmp(tab[ordre], tab[ordre + 1]) > 0)
				ft_swap(&tab[ordre], &tab[ordre + 1]);
			ordre++;
		}
		i++;
	}
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	count;

	count = 0;
	while (tab[count] != 0)
		count++;
	ft_ordre(count, tab, cmp);
}
