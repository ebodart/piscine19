/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 16:45:38 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/15 16:45:50 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;
	int ordre;

	while (s1[i] == s2[i])
	{
		i++;
		if ((s1[i] == '\0') && (s2[i] == '\0'))
		{
			return (0);
		}
	}
	ordre = s1[i] - s2[i];
	if (ordre > 0)
	{
		return (1);
	}
	else if (ordre < 0)
	{
		return (-1);
	}
	return (0);

}

int	main(void)
{
	char s1[] = "Hello";
	char s2[] = "Help";
	printf("%i", ft_strcmp(s1, s2));
}