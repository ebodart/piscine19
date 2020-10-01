/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_coord.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <ebodart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 14:57:22 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/30 18:00:41 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_h.h>

extern char g_vide;
extern char g_plein;
extern char g_obst;
int g_h;
int g_w;

int	ft_map_lines(char *buf)
{
	int i;
	int result;

	i = 0;
	while (i != '\n')
	{
		if (buf[i] == '+')
			i++;
		while (buf[i] == '0')
			i++;
		result = 0;
		while ((buf[i] >= '0') && (buf[i] <= '9'))
		{
			result = (result * 10) + (buf[i] - '0');
			i++;
		}
		return (result);
	}
	return (0);
}

void    ft_coord(char *buf)
{
	int i;
	int j;
	
	i = 0;
	while (buf[i] != '\n')
		i++;
	j = i;
	i++;
	while (buf[i] != '\n')
		i++;
	g_w = i - j;
    g_h = ft_map_lines(buf);
    
}

