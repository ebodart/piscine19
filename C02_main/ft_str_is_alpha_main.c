/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 18:59:09 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/14 18:59:13 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int a;
	int i;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	i = 0;
	a = 0;
	while (str[i] != '\0')
	{
		while (str[i] == alpha[a])
		{
			a = 0;
			i++;
			if (str[i] == '\0')
			{
				return (1);
			}
		}
		while (str[i] != alpha[a])
		{
			a++;
			if (alpha[a] == '\0')
			{
				return (0);
			}
		}
	}
return (1);
}

int	main(void)
{
	char str[0];
	printf("%i",ft_str_is_alpha(str));
}
