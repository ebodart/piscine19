/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 18:12:48 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/24 19:58:52 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_inter(char *s1, char *s2)
{
	int i;
	int j;
	int n;
	int a;

	n = 0;
	j = 0;
	i = 0;
	while (s1[i] && s2[j])
	{
		if (s1[i] == s2[j])
		{
			n = i;
			a = 0;
			while (s1[n - 1] != s1[i] && a == 0)
			{
				n--;
				if (n <= 0)
				{
					write(1, &s1[i], 1);
					a = 1;
				}
			}
			i++;
		}
		else if (s1[i] != s2[j])
			j++;
		else 
		{
			i++;
			j = 0;
		}
	}
	return (0);
}

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_inter(argv[1], argv[2]);
}
