/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <ebodart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 18:24:36 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/30 09:30:43 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int g_ind1 = 0;
int g_i2 = 0;

int		fsep(char lettre, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (lettre == charset[i])
			return (1);
		else
			i++;
	}
	return (0);
}

int		ft_nbrmots(char *str, char *sep)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if ((fsep(str[i], sep) == 1 && i != 0 &&
			(fsep(str[i - 1], sep) == 0)) ||
			(str[i + 1] == '\0' && fsep(str[i], sep) == 0))
			count++;
		i++;
	}
	return (count);
}

int		ft_nbrchar(char *str, char *sep, int fin)
{	
	int sep0;
	int sep_1;
	int sep1;

	if (g_i2 != 0)
		g_i2++;
	while (fin == 0)
	{
		sep0 = fsep(str[g_i2], sep);
		sep1 = fsep(str[g_i2 + 1], sep);
		sep_1 = fsep(str[g_i2 - 1], sep);
		if (sep0 == 1)
			g_i2++;
		else if ((sep0 == 0) && (str[g_i2 + 1] == '\0') && (sep_1 == 0))
			fin = 1;
		else if ((sep0 == 0) && (sep1 == 0) && (g_i2 == 0))
			g_i2++;
		else if ((sep0 == 0) && (sep1 == 1) && (sep_1 == 1))
		{
			g_ind1 = g_i2;
			return (g_i2 + 1);
		}
		else if ((sep0 == 0) && (sep_1 == 1) && (sep1 == 0))	
		{
			g_ind1 = g_i2;
			g_i2++;
		}
		else if ((sep0 == 0) && (sep1 == 0) && (sep_1 == 0))
			g_i2++;
		else if ((sep0 == 0) && (sep1 == 1) && (sep_1 == 0))
			fin = 1;
	}
	return (g_i2 - g_ind1 + 2);
}

char	*ft_mot_copy(char *str, char *sep)
{
	int		i;
	char	*box;
	int		fin;
	
	fin = 0;
	if (!(box = malloc(sizeof(char) * (ft_nbrchar(str, sep, fin)))))
		return (NULL);
	i = 0;
	while (g_ind1 <= g_i2)
	{
		box[i] = str[g_ind1];
		i++;
		g_ind1++;
	}
	box[i] = '\0';
	return (box);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		nbrmots;
	int		i;

	nbrmots = (ft_nbrmots(str, charset) + 1);
	if (!(tab = (malloc(sizeof(char*) * (nbrmots)))))
		return (NULL);
	i = 0;
	while (i < ft_nbrmots(str, charset))
	{
		tab[i] = ft_mot_copy(str, charset);
		if (i == 0)
			g_i2++;
		i++;
	}
	tab[i] = 0;
	g_ind1 = 0;
	g_i2 = 0;
	return (tab);
}

#include <stdio.h>

int        main(int argc, char **argv)
{
  (void)argc;
  char **tab;
  tab = ft_split(argv[1], argv[2]);
  while (*tab)
	printf("%s\n", *tab++);
}
