/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaznyts <dmaznyts@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 14:45:51 by dmaznyts          #+#    #+#             */
/*   Updated: 2017/03/07 19:36:16 by akravets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	super_mega_fucking_validator_9999(int **r, char *data, int i)
{
	if (i < tetr_count(data))
	{
		if (r[i][0] == 0 && r[i][1] == 1 && r[i][2] == 2 && r[i][3] == 3)
			super_mega_fucking_validator_9999(r, data, i + 1);
		else if (r[i][0] == 0 && r[i][1] == 1 && r[i][2] == 2 && r[i][3] == 5)
			super_mega_fucking_validator_9999(r, data, i + 1);
		else if (r[i][0] == 0 && r[i][1] == 1 && r[i][2] == 2 && r[i][3] == 6)
			super_mega_fucking_validator_9999(r, data, i + 1);
		else if (r[i][0] == 0 && r[i][1] == 1 && r[i][2] == 2 && r[i][3] == 7)
			super_mega_fucking_validator_9999(r, data, i + 1);
		else if (r[i][0] == 0 && r[i][1] == 1 && r[i][2] == 5 && r[i][3] == 6)
			super_mega_fucking_validator_9999(r, data, i + 1);
		else if (r[i][0] == 0 && r[i][1] == 1 && r[i][2] == 5 && r[i][3] == 10)
			super_mega_fucking_validator_9999(r, data, i + 1);
		else if (r[i][0] == 0 && r[i][1] == 1 && r[i][2] == 6 && r[i][3] == 7)
			super_mega_fucking_validator_9999(r, data, i + 1);
		else if (r[i][0] == 0 && r[i][1] == 1 && r[i][2] == 6 && r[i][3] == 11)
			super_mega_fucking_validator_9999(r, data, i + 1);
		else if (r[i][0] == 0 && r[i][1] == 5 && r[i][2] == 6 && r[i][3] == 7)
			super_mega_fucking_validator_9999(r, data, i + 1);
		else if (r[i][0] == 0 && r[i][1] == 5 && r[i][2] == 6 && r[i][3] == 10)
			super_mega_fucking_validator_9999(r, data, i + 1);
		else
			tetr_val0(r, data, i);
	}
}

int		**cor_croper(int **a, int i, int j, int count)
{
	while (i < count)
	{
		while (j < 4)
		{
			if (a[i][j] >= 5 && a[i][j] <= 8)
				a[i][j] -= 1;
			if (a[i][j] >= 10 && a[i][j] <= 13)
				a[i][j] -= 2;
			if (a[i][j] >= 15 && a[i][j] <= 18)
				a[i][j] -= 3;
			j++;
		}
		j = 0;
		i++;
	}
	return (a);
}

void	error(void)
{
	write(1, "error\n", 6);
	exit(0);
}

int		**parsitel(char *d, int **r, int i, int tmp)
{
	int c;
	int j;
	int cnt;

	c = 0;
	j = 0;
	cnt = 0;
	while (d[c] != '\0')
	{
		if (d[c] == '#')
		{
			if (cnt < 4)
				norm_fuck_you(r[i], &j, &cnt, &c);
		}
		c++;
		if (cnt == 4)
		{
			r[i][4] = ++tmp;
			cntrs(&i, &j, &cnt);
		}
	}
	return (r);
}

int		**validator(char *data, int tmp)
{
	int **ret;

	ret = ar_alloc(tetr_count(data));
	map_validator_1(data, 0);
	map_validator_2(data, 4);
	map_validator_3(data, 0);
	if (data[0] == '\0')
		error();
	ret = parsitel(data, ret, 0, tmp);
	ret = cor_normalizer(ret, data, 0, 0);
	ret = cor_normalizer(ret, data, 1, 0);
	super_mega_fucking_validator_9999(ret, data, 0);
	ret = cor_croper(ret, 0, 0, tetr_count(data));
	return (ret);
}
