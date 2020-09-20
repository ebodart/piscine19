/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 08:53:35 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/18 08:53:37 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_comp(char *str)
{
	int a;

	a = 0;
	while (str[a])
	{
		if (str[a] == 'a')
		{
			return (1);
		}
		a++;
	}
	return (0);

}

int	main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc != 2)
	{
		write(1, "a", 1);
		write(1, "\n", 1);
	}
	else
	{
		if ((ft_comp(argv[i])) == 1)
		{
			write(1, "a", 1);
			write(1, "\n", 1);
		}
		else
		{
			write(1, "\n", 1);
		}
	}
	return (0);
}
