/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 17:41:45 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/24 18:11:54 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int  ft_first(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		while ((str[i] == ' ') || (str[i] == '\t'))
		{
			i++;
			if (str[i] == '\0')
				return (0);

		}
		while ((str[i] != ' ') && (str[i] != '\t'))
		{
			write(1, &str[i], 1);	
			i++;
			if (str[i] == '\0')
				return (0);
		}
		return (0);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_first(argv[1]);
	write(1, "\n", 1);
}

