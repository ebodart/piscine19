/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 11:09:51 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/16 11:09:52 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				ordre;

	i = 0;
	if (n <= 0)
	{
		return (0);
	}
	n--;
	while ((i < n) && (s1[i] == s2[i]))
	{
		if ((s1[i] == '\0') && (s2[i] == '\0'))
		{
			return (0);
		}
		i++;
	}
	if ((i == n) && (s1[i] == s2[i]))
	{
		return (0);
	}
	ordre = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (ordre);
}
