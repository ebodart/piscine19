/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myopfuncs.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 16:19:22 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/20 16:53:44 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYOPFUNCS_H
# define MYOPFUNCS_H

int	div(int a, int b);

int	mul(int a, int b);

int	mod(int a, int b);

int	add(int a, int b);

int	sub(int a, int b);

int (*g_opfuncs[5])(int, int) = {add, sub, div, mul, mod};

#endif
