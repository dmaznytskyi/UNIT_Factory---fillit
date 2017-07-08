/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaznyts <dmaznyts@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 14:32:27 by dmaznyts          #+#    #+#             */
/*   Updated: 2017/02/28 21:50:40 by dmaznyts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# define BUFFER_SIZE 545

char	*ft_strcpy(char *dst, const char *src);
int		**validator(char *data, int tmp);
char	**ft_create_map();
char	**ft_expand_map(char **map);
void	ft_print_map(char **map);
int		ft_put_details(int **mas, char **map, int i, int data);
size_t	ft_strlen(const char *s);
int		**ar_alloc(int num);
int		tetr_count(char *s);
void	map_validator_1(char *data, int c);
void	map_validator_2(char *d, int c);
void	map_validator_3(char *data, int c);
int		**cor_croper(int **a, int i, int j, int count);
void	super_mega_fucking_validator_9999(int **r, char *data, int i);
int		**cor_normalizer(int **r, char *d, int shit, int tmp);
void	tetr_val0(int **r, char *data, int i);
void	cntrs(int *i, int *j, int *cnt);
void	norm_fuck_you(int *r, int *j, int *cnt, int *c);
void	error();

#endif
