/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <ebodart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 16:24:38 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/30 13:51:44 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int t_dest;
	unsigned int t_src;
	unsigned int i;
	unsigned int result;

	i = 0;
	t_dest = ft_strlen(dest);
	t_src = ft_strlen(src);
	if (t_dest < size)
		result = t_dest + t_src;
	else
		result = t_src + size;
	while (size && *(dest++))
	{
		size--;
	}
	dest--;
	while (src[i] && (i < size - 1) && (size > 0))
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	return (result);
}
