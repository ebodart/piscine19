/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 14:24:49 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/19 14:24:51 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int argc, char **argv)
{
	int i;
	int x;
	int y;
	int tab[6][6];
    char *str;

    str = argv[1];
	(void)argc;
    x = 0;
	y = 1;
	i = 0;
    y = 1;

	while (str[i])
	{
        while (i < 7)
            if (str[i] == ' ')
                i++;
            tab[1][x++] = (int)str[i++];
        x = 1;
        while (i < 15)
            if (str[i] == ' ')
                i++;
            tab[5][x++] = (int)str[i++];
        while (i < 23)
            if (str[i] == ' ')
                i++;
            tab[y++][0] = (int)str[i++];
        y = 1;
        while (i < 31)
            if (str[i] == ' ')
                i++;
            tab[y++][5] = (int)str[i++];
    }
    printf("%c", tab[0][1]);
}


