/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 11:30:01 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/14 11:30:05 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
		{
			dest[i] = src [i];
			i ++;
		}
		dest[i] = '\0';
		return (dest);
}

int		main(void)
{
	char src[] = "Hello";
	char dest[] = "Salut";
	
	ft_putstr(src);
	ft_putchar('\n');
	ft_putstr(dest);
	ft_putchar('\n');
	ft_strcpy(src, dest);
	ft_putchar('\n');
	ft_putstr(dest);
	ft_putchar('\n');
	ft_putstr(dest);
}
