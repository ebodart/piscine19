/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 12:34:29 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/15 12:34:32 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	if ((str[0] >= 'a') && (str[0] <= 'z'))
	{
		str[0] = str[0] - 32;
	}
	while (str[i] != '\0')
	{
		if ((str[i - 1] < '0') ||
			((str[i - 1] > '9') && (str[i - 1] < 'A')) ||
			((str[i - 1] > 'Z') && (str[i - 1] < 'a')) ||
			(str[i - 1] > 'z'))
		{
			if ((str[i] >= 'a') && (str[i] <= 'z'))
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}
