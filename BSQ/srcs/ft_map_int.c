/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <ebodart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 16:43:34 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/30 18:52:12 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"
#include <stdlib.h>
#include <unistd.h>

extern char g_obst;
extern char g_vide;
extern char g_plein;
extern int g_h;
extern int g_w;
extern int g_debut;
extern int g_fin;

int ft_first_line(int *map, char *buf, int i)
{
    while (i < g_debut)
    {
        map[i] = 0;
        i++;
    }
    if ((i == g_debut) && (buf[g_debut] == g_vide))
        map[g_debut] = 0;
    else if ((i == g_debut) && (buf[g_debut] == g_obst))
        map[g_debut] = 1;
    i++;
    while (i < (g_debut + g_w - 1))
    {
        if (buf[i] == g_obst)
            map[i] = 1;
        else
            map[i] = map[i - 1];
        i++;
    }
    i++;
    return (i);
}

int ft_other_lines(int *map, char *buf, int i)
{
    int j;
    
    while (i < (g_fin))
    {
        j = i;
        if (buf[i] == g_vide)
            map[i] = map[i - g_w] + 0;
        else if (buf[i] == g_obst)
            map[i] = map[i - g_w] + 1;
        i++;
        while (i < (j + g_w - 1))
        {
            if (buf[i] == g_vide)
                map[i] = map[i - g_w] + map[i - 1] - map[i - g_w - 1] + 0;
            else if (buf[i] == g_obst)
                map[i] = map[i - g_w] + map[i - 1] - map[i - g_w - 1] + 1;
            i++;
        }
        i++;
    }
    return (i);
}

int *ft_map_int(char *buf)
{
    int i;
    int *map;
    
    if (!(map = malloc(sizeof(int) * (g_fin + 1))))
        return (0);
    i = g_debut;
    i = ft_first_line(map, buf, i);
    i = ft_other_lines(map, buf, i);
    return (map);
}