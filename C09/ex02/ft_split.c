/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 17:13:43 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/25 17:13:44 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int g_index = 0;

int ft_count_1m(char *str, char *charset)
{
	int s;
	int c;
	int g_index;

	s = 0;
	c = 0;
	nbr_m = 0;
	while (str[s])
	{
		if (str[s] != charset[c])
		{
			if (charset[++c] == '\0')
			{	
				c = 0;
				if (str[++s] == '\0')
					g_index = s;
			}
		}
		else
		{
			if (nbr_plus(str, charset, s) == 1)		
				g_index = s;
			s++;
			c = 0; 
		}
	}
	return (g_index);
}

}

int nbr_plus(char *str, char *charset, int s)
{
	int i;

	i = 0;
	if (s == 0)
		return (0);
	while (charset[i])
	{
		if (str[s - 1] == charset[i])
			return (0);
		else
		{
			i++;
			if (charset[i] == '\0')
				return (1);
		}
	}
	return (0);
}

int	ft_count_m(char *str, char *charset)
{
	int s;
	int c;
	int nbr_m;

	s = 0;
	c = 0;
	nbr_m = 0;
	while (str[s])
	{
		if (str[s] != charset[c])
		{
			if (charset[++c] == '\0')
			{	
				c = 0;
				if (str[++s] == '\0')
					nbr_m++;
			}
		}
		else
		{
			if (nbr_plus(str, charset, s) == 1)		
				nbr_m++;
			s++;
			c = 0; 
		}
	}
	return (nbr_m);
}

int main(void)
{
	char *str = "45554dhjwghd445dwdwef56545";
	char *charset = "123456";
	printf("%i", ft_count_m(str, charset));
	printf("%i", ft_count_1m(str, charset));
}

/*char **ft_split(char *str, char *charset)
{
	char **tab;
	int i;
	int m;

	i = 0;
	count_m = ft_count_m(str, charset);
	if (!(tab = malloc(sizeof(char) * (count_m + 1))))
		return (NULL);
	while (i < count_m)
	{
		if (!(tab[i] = malloc(sizeof(char) * (ft_count_1m()))))
			return (NULL);
	}

	return (tab);
}*/
