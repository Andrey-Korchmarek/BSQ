/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 21:03:45 by mashley           #+#    #+#             */
/*   Updated: 2019/06/25 21:15:17 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"
#include <stdlib.h>
#include <unistd.h>

char				**matrix;
char				empty;
char				obs;
char				full;
unsigned short int	wid;
unsigned short int	hig;

int	main(int argc, char **argv)
{
	unsigned short int	i;

	if (argc == 1)
		return (-1);
	i = 1;
	while (i < argc)
	{
		my_super_function(argv[i])
		i++;
	}
	return (0);
}
