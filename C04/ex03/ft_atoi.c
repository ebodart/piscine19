/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 19:11:25 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/16 19:11:29 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int signe;
	int i;
	int result;

	signe = 1;
	i = 0;

	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\v') ||
	(str[i] == '\f') || (str[i] == '\r') || (str[i] == '\n'))
	{
		i++;
	} 
	while ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
		{
			signe = -signe;
		}
		i++;
	}
	result = 0;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * signe);
}

int	main(void)
{
	char str[] = "  983746abdh282";
	printf("%i\n", ft_atoi(str));
	printf("%i\n", atoi(str));

}
