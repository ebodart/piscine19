/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 08:30:24 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/14 17:10:06 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		isnum(char c)
{
	return (c >= '0' && c <= '9');
}

int		toint(char c)
{
	return (c - '0');
}

int		iswhitespace(char c)
{
	return (c == ' ' ||
			c == '\t' ||
			c == '\n' ||
			c == '\v' ||
			c == '\f' ||
			c == '\r');
}

int		ft_atoi(char *str)
{
	unsigned int	r;
	int				s;

	r = 0;
	s = 1;
	while (*str && iswhitespace(*str))
		str++;
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			s *= -1;
		str++;
	}
	while (*str && isnum(*str))
	{
		r *= 10;
		r += toint(*str);
		str++;
	}
	return (r * s);
}
