/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 15:11:00 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/20 17:23:22 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "myheader.h"
#include "myopfuncs.h"

const char		g_operators[5] = {'+', '-', '/', '*', '%'};

int				findoperator(const char *str)
{
	int i;

	i = -1;
	while (++i < 5)
		if (str[1] == 0 && str[0] == g_operators[i])
			return (i);
	return (-1);
}

int				operate(int a, int b, int opindex)
{
	return (g_opfuncs[opindex](a, b));
}

int				g_opindex;

int				main(int argc, char *argv[])
{
	int nums[2];

	if (argc != 4)
		return (0);
	if ((g_opindex = findoperator(argv[2])) == -1)
	{
		ft_putnbr(0);
		write(1, "\n", 1);
		return (0);
	}
	nums[0] = ft_atoi(argv[1]);
	nums[1] = ft_atoi(argv[3]);
	if (nums[1] == 0 && g_opindex == 2)
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	else if (nums[1] == 0 && g_opindex == 4)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	ft_putnbr(operate(nums[0], nums[1], g_opindex));
	write(1, "\n", 1);
	return (0);
}
