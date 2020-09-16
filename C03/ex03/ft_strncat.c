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
	unsigned int count;
	unsigned int i;

	count = 0;
	i = 0;
	while (dest[count])
		count++;
	while ((src[i]) && (i < nb))
	{
		dest[count + i] = src[i];
		i++;
	}
	if (i == nb)
	{
		dest[count + i] = '\0';
	}
	return (dest);
}
