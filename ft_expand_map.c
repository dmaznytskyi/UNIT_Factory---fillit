/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_expand_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akravets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 12:08:12 by akravets          #+#    #+#             */
/*   Updated: 2017/02/27 18:45:07 by akravets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_put_dots(int count, char **map)
{
	int local_count;

	local_count = 0;
	while (local_count < count)
	{
		map[local_count][count] = '.';
		local_count++;
	}
	local_count = 0;
	while (local_count <= count)
	{
		map[count][local_count] = '.';
		local_count++;
	}
}

char	**ft_expand_map(char **map)
{
	int j;
	int count;

	count = 0;
	j = 0;
	while (map[0][j] != '\0' && j < 15)
	{
		if (map[0][j] == '.')
			count++;
		j++;
	}
	if (count == 0)
	{
		map[0][0] = '.';
		map[0][1] = '.';
		map[1][0] = '.';
		map[1][1] = '.';
	}
	else
		ft_put_dots(count, map);
	return (map);
}
