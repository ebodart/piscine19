/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 09:07:20 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/20 09:07:22 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	ft_ordre(int argc, char **argv)
{
	int		ordre;
	char	*swap;
	int		i;

	i = 1;
	while (i < (argc - 1))
	{
		ordre = 1;
		while (ordre < argc - i)
		{
			if (ft_strcmp(argv[ordre], argv[ordre + 1]) == 1 && i < argc - 1)
			{
				swap = argv[ordre + 1];
				argv[ordre + 1] = argv[ordre];
				argv[ordre] = swap;
			}
			ordre++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int	i;

	ft_ordre(argc, argv);
	i = 1;
	while (i < argc)
	{
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
