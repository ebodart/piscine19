/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <ebodart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 09:48:48 by ebodart           #+#    #+#             */
/*   Updated: 2020/10/01 09:13:39 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_h.h"
#include "ft_file.h"

extern char g_obst;
extern char g_vide;
extern char g_plein;
extern int g_h;
extern int g_w;
extern int g_debut;
extern int g_fin;


void    ft_print_map(int *map)
{
    int     i;
    int     j;
    
    i = 0;
    while (i < g_debut)
    {
        ft_putnbr(map[i]);
        i++;
    }
    ft_putchar('\n');
    while (i <= g_fin)
    {
        j = i;
        while (i < (j + g_w))
        {
            ft_putnbr(map[i]);
            i++;
        }
        ft_putchar('\n');
    }
}


int		main(int argc, char *argv[])
{
    (void)argc;
	char	*buf;
    int    *map;

    buf = ft_setup_buffer(argv[1]);
    ft_putstr(buf);
    /*ft_binary(valeur,buf,w);*/
    ft_coord(buf);
    ft_map_error(buf);
    if (!(map = malloc(sizeof(int) * (g_fin + 1))))
        return (0);
    map = ft_map_int(buf);
    ft_print_map(map);
    g_h = 0;
    g_w = 0;
    g_debut = 0;
    g_fin = 0;
    
    free(buf);
    return (0);
}