/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mashley.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 18:53:10 by mashley           #+#    #+#             */
/*   Updated: 2019/06/25 21:18:21 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include "head.h"

voide	read_file(char *file)
{
	int					fd;
	char				buf;
	unsigned short int	i;
	unsigned int		d;
	t_stack				*stack;

	fd = open(file, O_RDWR);
	if (fd == -1)
	{
		write(1, "map error\n", 10);
		return ;
	}
	i = 1;
	while ((read(fd, buf, 1) != '\n') && (i <= 13))
	{
		push(stack, buf);
		i++;
	}
	if (i < 5)
	{
		write(1, "map error\n", 10);
		return ;
	}
	full = pop(stack);
	obs = pop(stack);
	empty = pop(stack);
	hig = 0;
	d = 1;
	while (stack)
	{
		buf = pop(stack);
		if (buf >= '0' && buf <= '9')
			hig  = hig + (buf - '0') * d;
		else
		{
			write(1, "map error\n", 10);
			return ;
		}
		d *= 10;
	}
	i = 1;
	while (read(fd, buf, 1) != '\n')
	{
		push(stack, buf);	
		i++;
	}
	wid = i;
	if ((matrix = malloc(sizeof(char)*wid*hig)))
	{
		while (i > 0)
	}
}
