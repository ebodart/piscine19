/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 17:56:46 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/21 08:21:35 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			myswap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

unsigned int	getindexofdiff(char **a, char **b)
{
	int i;

	i = 0;
	while ((*a)[i] && (*a)[i] == (*b)[i])
		i++;
	return (i);
}

void			mysort(int argc, char **argv)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i < argc)
	{
		j = 0;
		while (j < argc - 1)
		{
			k = getindexofdiff(&argv[j], &argv[j + 1]);
			if (argv[j][k] > argv[j + 1][k])
				myswap(&argv[j], &argv[j + 1]);
			j++;
		}
		i++;
	}
}

void			ft_sort_string_tab(char **tab)
{
	int argc;

	argc = 0;
	while (tab[argc])
		argc++;
	mysort(argc, tab);
}
