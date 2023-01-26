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

void	let_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	find_player(t_data **data, int row, int column, char **str)
{
	int	i;
	int	j;

	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < column)
		{
			if (str[i][j] == 'P')
			{
				(*data)->p_x = i;
				(*data)->p_y = j;
				return ;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_data	*data;
	void	*mlx;
	void	*mlx_win;

	if (argc != 2)
		map_format_error(1);
	is_ber(argv[1]);
	data = malloc(sizeof(t_data));
	data->map = malloc(sizeof(t_map));
	check_matris(&data->map, argv[1]);
	data->map->str = take_array(data->map->column, data->map->row, argv[1]);
	check_wall(data->map->column, data->map->row, data->map->str);
	check_uniq(data->map->str);
	ft_path_find(data->map->str, data->map->row, data->map->column, &data);
	let_free(data->map->str);
	data->map->str = take_array(data->map->column, data->map->row, argv[1]);
	data->img = (void **)malloc(sizeof(void *) * 5);
	support(&data);
	support2(&data);
}
