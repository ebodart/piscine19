/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <ebodart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 14:00:07 by ebodart           #+#    #+#             */
/*   Updated: 2020/10/01 14:46:23 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int ordre;

	i = 0;
	while (s1[i] == s2[i])
	{
		if ((s1[i] == '\0') && (s2[i] == '\0'))
		{
			return (0);
		}
		i++;
	}
	ordre = s1[i] - s2[i];
	if (ordre >= 0)
		return (1);
	if (ordre < 0)
		return (-1);
	return (ordre);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_ordre(int count, char **tab)
{
	int		ordre;
	char	*swap;
	int		i;

	i = 1;
	while (i < (count))
	{
		ordre = 0;
		while (ordre < count - i)
		{
			if (ft_strcmp(tab[ordre], tab[ordre + 1]) == 1 && i < count)
			{
				swap = tab[ordre + 1];
				tab[ordre + 1] = tab[ordre];
				tab[ordre] = swap;
			}
			ordre++;
		}
		i++;
	}
}

void	ft_sort_string_tab(char **tab)
{
	int	count;
	int i;

	count = 0;
	while (tab[count] != 0)
		count++;
	ft_ordre(count, tab);
}
