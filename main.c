/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clingier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 17:19:29 by clingier          #+#    #+#             */
/*   Updated: 2018/10/12 16:18:41 by clingier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "get_next_line.h"
#include <stdio.h>

int		main(void)
{
	int fd;
	char *str;

	fd = open("test", O_RDONLY);
	get_next_line(fd, &str);
	ft_putstr(str);
	get_next_line(fd, &str);
	ft_putstr(str);
	return (0);
}
