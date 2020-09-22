/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 10:48:07 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/22 10:48:09 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int g_count = 1;

char	ft_conca(char *str, char *sep, char *conca, int size)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (conca[i])
		i++;
	while (str[j])
		conca[i++] = str[j++];
	j = 0;
	while (sep[j] && (g_count < size))
		conca[i++] = sep[j++];
	conca[i] = '\0';
	g_count++;
	return (*conca);
}

int		ft_count(char *str)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (str[i++])
		count++;
	return (count);
}

int		ft_total(char **strs, char *sep, int size)
{
	int i;
	int total;

	i = 0;
	total = 1;
	total = total + (ft_count(sep) * (size - 1));
	while (i < size)
	{
		total = total + ft_count(strs[i]);
		i++;
	}
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*conca;

	conca = malloc((1));
	conca[0] = '\0';
	if (size <= 0)
		return (conca);
	conca = malloc(sizeof(char) * (ft_total(strs, sep, size)));
	if (!conca)
		return (0);
	conca[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_conca(strs[i], sep, conca, size);
		i++;
	}
	return (conca);
}
