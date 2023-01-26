/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yceylan <yceylan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:12:32 by yceylan           #+#    #+#             */
/*   Updated: 2023/01/26 17:12:34 by yceylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "so_long.h"

void	is_ber(char *str)
{
	int	len;

	len = ft_strlen(str);
	len--;
	if (str[len] == 'r' && str[len - 1] == 'e' && str[len -2] == 'b' && \
str[len - 3] == '.')
		return ;
	map_format_error(1);
}

void	check_matris(t_map **data, char *str)
{
	int		fd;
	int		len;
	int		lenn;
	int		i;
	char	*str1;

	i = 0;
	fd = open(str, O_RDWR);
	str1 = get_next_line(fd);
	len = ft_strlen(str1);
	while (str1)
	{
		free(str1);
		str1 = get_next_line(fd);
		if (str1)
		{
			lenn = ft_strlen(str1);
			if (len != lenn)
				map_format_error(1);
		}
		i++;
	}
	len--;
	(*data)->column = len;
	(*data)->row = i;
}

char	**take_array(int column, int row, char *str)
{
	int		i;
	int		fd;
	char	**strmap;

	i = 0;
	fd = open(str, O_RDWR);
	strmap = malloc (sizeof(char *) * (row + 1));
	if (!strmap)
		exit(1);
	while (i < row)
	{
		strmap[i] = get_next_line(fd);
		strmap[i][column] = 0;
		i++;
	}
	strmap[i] = 0;
	return (strmap);
}

void	check_wall(int column, int row, char **strmap)
{
	int	i;

	i = 1;
	row--;
	if (ft_str_check(strmap[0], '1') != column || \
	ft_str_check(strmap[row], '1') != column)
		map_format_error(1);
	column--;
	while (i < row)
	{
		if (!(strmap[i][0] == '1' && strmap[i][column] == '1'))
			map_format_error(1);
		i++;
	}
}
