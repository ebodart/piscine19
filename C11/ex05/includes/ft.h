/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <ebodart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 12:11:16 by ebodart           #+#    #+#             */
/*   Updated: 2020/10/01 13:52:50 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

int		ft_atoi(char *str);

void	ft_putnbr(char c);

int		somme(int a, int b);

int		soustr(int a, int b);

int		div(int a, int b);

int		multi(int a, int b);

int		mod(int a, int b);

int		(*g_operations[5])(int, int) = {somme, soustr, div, multi, mod};

#endif
