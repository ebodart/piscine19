/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <ebodart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 09:54:49 by ebodart           #+#    #+#             */
/*   Updated: 2020/10/01 11:08:13 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (i < length)
	{
		if (((*f)(tab[i]) != 0))
			count++;
		i++;
	}
	return (count);
}
