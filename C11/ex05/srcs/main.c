/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <ebodart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 12:10:48 by ebodart           #+#    #+#             */
/*   Updated: 2020/10/01 13:54:38 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>

int	ft_calcul(char *i, char *j, char op)
{
	int signe_op;
	int a;
	int b;

	a = ft_atoi(i);
	b = ft_atoi(j);
	signe_op = -1;
	if (op == '+')
		signe_op = 0;
	else if (op == '-')
		signe_op = 1;
	else if (op == '/')
		signe_op = 2;
	else if (op == '*')
		signe_op = 3;
	else if (op == '%')
		signe_op = 4;
	return (g_operations[signe_op](a, b));
}

int	ft_mauvais_mod_div(char *j, char op)
{
	int b;

	b = ft_atoi(j);
	if (b == 0 && op == '/')
		return (1);
	else if (b == 0 && op == '%')
		return (2);
	else
		return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	if ((*argv[2] != '+') && (*argv[2] != '-') && (*argv[2] != '/') &&
		(*argv[2] != '*') && (*argv[2] != '%'))
	{
		ft_putnbr(0);
		write(1, "\n", 1);
		return (0);
	}
	if (ft_mauvais_mod_div(argv[3], *argv[2]) == 1)
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	if (ft_mauvais_mod_div(argv[3], *argv[2]) == 2)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	ft_putnbr(ft_calcul(argv[1], argv[3], *argv[2]));
	write(1, "\n", 1);
	return (0);
}
