/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 14:07:11 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/15 14:07:19 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int nbr;
	unsigned int size_d;

	nbr = 0;
	size_d = 0;
	while (src[nbr] != '\0')
	{
		nbr++;
	}
	if (size != 0)
	{
		while ((src[size_d] != 0) && (size_d < (size - 1)))
		{
			dest[size_d] = src[size_d];
			size_d++;
		}
		dest[size_d] = '\0';
	}
	return (nbr);
}
