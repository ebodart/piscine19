/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 15:10:19 by agraton           #+#    #+#             */
/*   Updated: 2020/09/10 20:30:31 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z' + 1;
	while (c-- > 'a')
	{
		write(1, &c, 1);
	}
}

int		main(void)
{
	ft_print_reverse_alphabet();
}
