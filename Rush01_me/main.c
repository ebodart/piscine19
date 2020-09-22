/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 11:15:29 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/19 11:29:56 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char **argv)
{
	int i;
	int x;
	int y;
	int tab[6][6];

	(void)argc;
	x = 0;
	y = 1;
	i = 1;
	while (argv[i])
	{
		while (i < 5)
			tab[1][x++] = (int)argv[i++];
		x = 1;
		while (i < 9)
			tab[5][x++] = (int)argv[i++];
		while (i < 13)
			tab[y++][0] = (int)argv[i++];
		y = 1;
		while (i < 17)
			tab[y++][5] = (int)argv[i++];
	}
}
