/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_details.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akravets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 16:46:02 by akravets          #+#    #+#             */
/*   Updated: 2017/02/27 19:27:11 by akravets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	put_letter(int x, int y, int *mas, char **map)
{
	int j;

	j = 0;
	while (j <= 3)
	{
		map[(mas[j]) / 4 + x][(mas[j]) % 4 + y] = mas[4];
		j++;
	}
}

int		ft_find_place(char **map, int *mas, int x, int i)
{
	int y;
	int j;
	int c;

	c = 0;
	j = ft_strlen(map[0]);
	while (++x < j)
	{
		y = -1;
		while (++y < j)
		{
			if (map[(mas[0]) / 4 + x][(mas[0]) % 4 + y] == '.'
				&& map[(mas[1]) / 4 + x][(mas[1]) % 4 + y] == '.'
				&& map[(mas[2]) / 4 + x][(mas[2]) % 4 + y] == '.'
				&& map[(mas[3]) / 4 + x][(mas[3]) % 4 + y] == '.')
			{
				if (c++ == i)
				{
					put_letter(x, y, mas, map);
					return (1);
				}
			}
		}
	}
	return (0);
}

void	ft_erase(char **map, char letter)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (map[i][0] != '\0')
	{
		while (map[i][j] != '\0')
		{
			if (map[i][j] == letter)
				map[i][j] = '.';
			j++;
		}
		j = 0;
		i++;
	}
}

int		ft_put_details(int **mas, char **map, int i, int data)
{
	int p;

	p = 0;
	if (i == data)
		return (1);
	while (ft_find_place(map, mas[i], -1, p++))
	{
		if (ft_put_details(mas, map, i + 1, data))
			return (1);
		ft_erase(map, mas[i][4]);
	}
	return (0);
}
