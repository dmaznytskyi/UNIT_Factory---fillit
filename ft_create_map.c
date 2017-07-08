/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akravets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 12:00:18 by akravets          #+#    #+#             */
/*   Updated: 2017/02/27 21:30:31 by dmaznyts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_create_map(void)
{
	char	**map;
	int		i;
	int		j;

	j = 0;
	i = 0;
	map = (char **)malloc(16 * sizeof(char *));
	while (i <= 15)
	{
		map[i] = malloc(16 * sizeof(char));
		while (j <= 15)
		{
			map[i][j] = '\0';
			j++;
		}
		i++;
		j = 0;
	}
	return (map);
}
