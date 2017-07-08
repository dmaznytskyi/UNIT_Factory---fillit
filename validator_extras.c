/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator_extras.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaznyts <dmaznyts@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 20:26:39 by dmaznyts          #+#    #+#             */
/*   Updated: 2017/02/28 21:50:50 by dmaznyts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	extra(int *r)
{
	int h;

	h = 0;
	while (h <= 3)
	{
		r[h] += 1;
		h++;
	}
}

int		**cor_normalizer(int **r, char *d, int shit, int tmp)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < tetr_count(d))
	{
		if (shit == 1)
			tmp = 0;
		else
			tmp = r[i][0];
		while (j < 4)
		{
			r[i][j] = r[i][j] - tmp;
			if (r[i][j] % 10 == 4 || r[i][j] % 10 == 9)
				extra(r[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (r);
}

void	tetr_val0(int **r, char *data, int i)
{
	if (r[i][0] == 0 && r[i][1] == 5 && r[i][2] == 6 && r[i][3] == 11)
		super_mega_fucking_validator_9999(r, data, i + 1);
	else if (r[i][0] == 0 && r[i][1] == 5 && r[i][2] == 10 && r[i][3] == 11)
		super_mega_fucking_validator_9999(r, data, i + 1);
	else if (r[i][0] == 0 && r[i][1] == 5 && r[i][2] == 10 && r[i][3] == 15)
		super_mega_fucking_validator_9999(r, data, i + 1);
	else if (r[i][0] == 1 && r[i][1] == 2 && r[i][2] == 5 && r[i][3] == 6)
		super_mega_fucking_validator_9999(r, data, i + 1);
	else if (r[i][0] == 1 && r[i][1] == 5 && r[i][2] == 6 && r[i][3] == 7)
		super_mega_fucking_validator_9999(r, data, i + 1);
	else if (r[i][0] == 1 && r[i][1] == 5 && r[i][2] == 6 && r[i][3] == 10)
		super_mega_fucking_validator_9999(r, data, i + 1);
	else if (r[i][0] == 1 && r[i][1] == 5 && r[i][2] == 6 && r[i][3] == 11)
		super_mega_fucking_validator_9999(r, data, i + 1);
	else if (r[i][0] == 1 && r[i][1] == 6 && r[i][2] == 10 && r[i][3] == 11)
		super_mega_fucking_validator_9999(r, data, i + 1);
	else if (r[i][0] == 2 && r[i][1] == 5 && r[i][2] == 6 && r[i][3] == 7)
		super_mega_fucking_validator_9999(r, data, i + 1);
	else
	{
		write(1, "error\n", 6);
		exit(0);
	}
}

void	cntrs(int *i, int *j, int *cnt)
{
	*i += 1;
	*cnt = 0;
	*j = 0;
}

void	norm_fuck_you(int *r, int *j, int *cnt, int *c)
{
	if (!r)
		error();
	r[*j] = *c;
	*j += 1;
	*cnt += 1;
}
