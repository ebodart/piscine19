/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 17:04:08 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/16 17:04:11 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int s;

	i = 0;
	s = 0;
	while (dest[i])
		i++;
	while ((src[s]) && (s < nb))
	{
		dest[i + s] = src[s];
		s++;
	}
	dest[i + s] = '\0';
	return (dest);
}
