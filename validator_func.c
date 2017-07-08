/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator_func.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaznyts <dmaznyts@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 20:26:57 by dmaznyts          #+#    #+#             */
/*   Updated: 2017/03/06 21:03:08 by dmaznyts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		**ar_alloc(int num)
{
	int **arr;
	int i;

	i = 0;
	arr = (int **)malloc((num + 1) * sizeof(int *));
	if (arr)
	{
		while (i < num)
		{
			arr[i] = (int *)malloc(5 * sizeof(int));
			i++;
		}
		return (arr);
	}
	arr[num] = NULL;
	return (0);
}

int		tetr_count(char *s)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '\n' && (s[i + 1] == '\n' || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

void	map_validator_1(char *data, int c)
{
	while (data[c] != '\0')
	{
		if (!(data[c] == '#' || data[c] == '.' || data[c] == '\n'))
		{
			write(1, "error\n", 6);
			exit(0);
		}
		c++;
	}
}

void	map_validator_2(char *d, int c)
{
	if (d[c] != '\0')
	{
		if (!(d[c] == '\n' && d[c + 5] == '\n' && d[c + 10] == '\n'
			&& d[c + 15] == '\n' && (d[c + 16] == '\n' || d[c + 16] == '\0')))
		{
			write(1, "error\n", 6);
			exit(0);
		}
		else
			map_validator_2(d, c + 21);
	}
	else
		return ;
}

void	map_validator_3(char *data, int c)
{
	int cnt;

	cnt = 0;
	while (data[c] != '\0')
	{
		if (data[c] == '#')
			cnt++;
		c++;
	}
	cnt = cnt / 4;
	if (cnt != tetr_count(data) || cnt == 0)
	{
		write(1, "error\n", 6);
		exit(0);
	}
}
