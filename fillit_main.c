/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaznyts <dmaznyts@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 14:41:22 by dmaznyts          #+#    #+#             */
/*   Updated: 2017/02/28 22:14:18 by dmaznyts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	arg_wrap(int ac, char **av)
{
	int fd;

	fd = 0;
	if (ac != 2)
	{
		write(1, "usage: ./fillit source_file\n", 28);
		exit(0);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		write(1, "error\n", 6);
		exit(0);
	}
	return (fd);
}

int	main(int ac, char **av)
{
	char	data[BUFFER_SIZE];
	char	**map;
	int		fd;
	int		**mas;

	fd = arg_wrap(ac, av);
	read(fd, &data, BUFFER_SIZE);
	close(fd);
	map = ft_create_map();
	ft_expand_map(map);
	mas = validator(data, 64);
	while (!(ft_put_details(mas, map, 0, tetr_count(data))))
		ft_expand_map(map);
	ft_print_map(map);
	return (0);
}
