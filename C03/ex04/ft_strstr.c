/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 17:36:26 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/16 17:36:32 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int s;
	int t;

	s = 0;
	t = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[s])
	{
		while (str[s] == to_find[t])
		{
			s++;
			t++;
			if (to_find[t] == '\0')
				return (to_find);
		}
		s++;
	}
	return (0);
}
