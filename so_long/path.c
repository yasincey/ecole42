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

int	ft_path(char **str, int row, int column)
{
	if (str[row][column] != '1' && str[row][column] != 'E' \
	&& str[row][column] != '2')
	{
		str[row][column] = '2';
		if (ft_path(str, row - 1, column))
			return (1);
		if (ft_path(str, row, column - 1))
			return (1);
		if (ft_path(str, row + 1, column))
			return (1);
		if (ft_path(str, row, column + 1))
			return (1);
	}
	return (0);
}

int	char_counter_len(char **str, char c)
{
	int	i;
	int	j;
	int	len;

	len = 0;
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] == c)
				len++;
			j++;
		}
		i++;
	}
	return (len);
}

int	check_e_free(char **str, int x, int y)
{
	if (str[x][y + 1] == '2' || str[x][y - 1] == '2' || \
	str[x + 1][y] == '2' || str[x - 1][y] == '2' )
		return (1);
	return (0);
}

void	find_pos(t_data **data, char c, char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] == c)
			{
				(*data)->img_x = i;
				(*data)->img_y = j;
				break ;
			}
			j++;
		}
		i++;
	}
}

void	ft_path_find(char **str, int row, int column, t_data **data)
{
	int	i;
	int	j;
	int	collect;

	i = 0;
	collect = 0;
	collect = char_counter_len(str, 'C');
	(*data)->collectable = collect;
	find_pos(data, 'P', str);
	ft_path(str, (*data)->img_x, (*data)->img_y);
	find_pos(data, 'E', str);
	collect = char_counter_len(str, 'C');
	if (collect != 0 || !check_e_free(str, (*data)->img_x, (*data)->img_y))
	{
		ft_printf("WRONG MAP DESING");
		exit(1);
	}
}
