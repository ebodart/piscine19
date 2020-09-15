/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shashah <shashah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 17:29:50 by shashah           #+#    #+#             */
/*   Updated: 2020/09/15 15:00:07 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char			*ft_printstrlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	result;
	int				counter;

	result = 0;
	while (src[result])
		++result;
	counter = 0;
	while (src[counter] != '\0' && counter < ((int)size - 1))
	{
		dest[counter] = src[counter];
		++counter;
	}
	if (size)
		dest[counter] = '\0';
	return (dest);
}

unsigned int		ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	result;
	int				counter;

	result = 0;
	while (src[result])
		++result;
	counter = 0;
	while (src[counter] != '\0' && counter < ((int)size - 1))
	{
		dest[counter] = src[counter];
		++counter;
	}
	if (size)
		dest[counter] = '\0';
	return (result);
}

int	main(void)
{
	char src[] = "Salut ca va";
	char dest[] = "ok merci bcp";
	printf("%u", ft_strlcpy(dest, src, 7));
	printf("%s", ft_printstrlcpy(dest, src, 7));
}

