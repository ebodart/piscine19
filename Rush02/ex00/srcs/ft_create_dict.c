/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_dict.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfilipov <dfilipov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 10:24:40 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/27 16:32:26 by dfilipov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "ft_fcts.h"

#define BUF_SIZE 999999

extern int g_index1;
extern int g_index2;

struct s_nbr_dict	*ft_create_dict(void)
{
	int					fd;
	int					ret;
	char				buf[BUF_SIZE + 1];
	struct s_nbr_dict	*tab;

	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() failed\n");
	}
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	tab = ft_struct(buf);
	g_index1 = 0;
	g_index2 = 0;
	if (close(fd) == -1)
	{
		ft_putstr("close() failed\n");
	}
	return (tab);
}
