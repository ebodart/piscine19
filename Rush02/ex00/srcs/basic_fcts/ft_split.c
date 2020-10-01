/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 15:12:50 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/26 09:19:26 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_in_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int		ft_nbr_words(char *str, char *charset)
{
	int		count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (is_in_charset(*str, charset))
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

int		word_size(char *str, char *charset, int pos)
{
	int		i;

	i = 0;
	while (str[pos])
	{
		if (!is_in_charset(str[pos], charset))
			i++;
		pos++;
	}
	return (i);
}

void	put_words(char **tab, char *str, char *charset)
{
	int		i;
	int		j;
	int		k;

	i = -1;
	j = 0;
	k = 0;
	while (str[++i])
	{
		if (!is_in_charset(str[i], charset))
		{
			if (k == 0)
				tab[j] = malloc(
					(word_size(str, charset, i) + 1) * sizeof(char));
			tab[j][k] = str[i];
			tab[j][k + 1] = '\0';
			k++;
		}
		if ((is_in_charset(str[i], charset) &&
			!is_in_charset(str[i + 1], charset) && k > 0))
		{
			j++;
			k = 0;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;

	tab = malloc((ft_nbr_words(str, charset) + 1) * sizeof(char*));
	put_words(tab, str, charset);
	tab[ft_nbr_words(str, charset)] = NULL;
	return (tab);
}
