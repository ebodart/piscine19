/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <ebodart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 10:25:53 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/30 17:07:28 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"
#include <stdlib.h>

char g_obst = 'o';
char g_plein = 'p';
char g_vide = 'v';
int g_debut = 0;
int g_fin = 0;
extern int g_h;
extern int g_w;

int	ft_error_w(char *buf)
{	
	int i;
	int j;
	
	i = 0;
	while (buf[i] != '\n')
		i++;
	j = i;
	while (buf[i] != '\0')
	{
		j = i;
		i++;
		while (buf[i] != '\n' && buf[i] != '\0') 
			i++;
		if ((i - j) != g_w)
			return (1);
		if (buf[i + 1] == '\0')
			return (0);
	}
	return (0);
}

int ft_error_firstl(char *buf)
{
	int i;
    int count;

	i = 0;
	if (buf[i] == '+')
		i++;
	while (buf[i] == '0')
		i++;
    while ((buf[i] >= '0') && (buf[i] <= '9'))
		i++;
	count = 0;
	while (buf[i] != '\n')
	{
		count++;
        i++;
	}
	g_debut = (i + 1);
	g_fin = ((g_w * g_h) + (g_debut - 1));
	if (count != 3)
		return (1);
	g_plein = buf[--i];
	g_obst = buf[--i];
	g_vide = buf[--i];
	return (0);
}

int ft_error_h(char *buf)
{
	int count;
	int i;

	i = 0;
	count = 0;
	if (g_h == 0)
		return (1);
	while (buf[i] != '\0')
	{
		if (buf[i] == '\n')
			count++;
		i++;
	}
	if ((count - 1) != g_h)
		return (1);
	return (0);
}

int ft_map_error(char *buf)
{	
	if ((ft_error_w(buf) == 1) || (ft_error_h(buf) == 1) ||
		((ft_error_firstl(buf)) == 1))
	{
		ft_putstr("error map\n");
		exit (0);
	}
	return (0);
}