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

void	put_image_sup(t_data *data, int i, int j)
{
	if (data->map->str[i][j] == '1')
	{
		mlx_put_image_to_window(data->mlx, data->win, \
data->img[1], data->size_x, data->size_y);
	}
	if (data->map->str[i][j] == 'E')
	{
		mlx_put_image_to_window(data->mlx, data->win, data->img[3], \
data->size_x, data->size_y);
	}
	if (data->map->str[i][j] == 'C')
	{
		mlx_put_image_to_window(data->mlx, data->win, data->img[4], \
data->size_x, data->size_y);
	}
	if (data->map->str[i][j] == 'P')
	{
		mlx_put_image_to_window(data->mlx, data->win, data->img[0], \
data->size_x, data->size_y);
	}
}

void	put_image(t_data *data)
{
	int	row;
	int	column;
	int	i;
	int	j;

	i = -1;
	row = data->map->row;
	column = data->map->column;
	data->size_y = 0;
	mlx_clear_window(data->mlx, data->win);
	while (++i < row)
	{
		j = -1;
		data->size_x = 0;
		while (++j < column)
		{
			mlx_put_image_to_window(data->mlx, data->win, data->img[2], \
data->size_x, data->size_y);
			put_image_sup(data, i, j);
			data->size_x += 64;
		}
		data->size_y += 64;
	}
	data->size_y = 0;
	data->size_x = 0;
}

void	support(t_data **data)
{
	(*data)->mlx = mlx_init();
	(*data)->img[0] = mlx_xpm_file_to_image((*data)->mlx, UP, \
											&(*data)->img_x, &(*data)->img_y);
	(*data)->img[1] = mlx_xpm_file_to_image((*data)->mlx, WLL, \
											&(*data)->img_x, &(*data)->img_y);
	(*data)->img[2] = mlx_xpm_file_to_image((*data)->mlx, BCK, \
											&(*data)->img_x, &(*data)->img_y);
	(*data)->img[3] = mlx_xpm_file_to_image((*data)->mlx, EXT, \
											&(*data)->img_x, &(*data)->img_y);
	(*data)->img[4] = mlx_xpm_file_to_image((*data)->mlx, CLT, \
											&(*data)->img_x, &(*data)->img_y);
}

void	support2(t_data **data)
{
	(*data)->win = mlx_new_window((*data)->mlx, ((*data)->map->column * 64), \
	((*data)->map->row * 64), "/so_long");
	find_player(data, (*data)->map->row, (*data)->map->column, \
	(*data)->map->str);
	put_image(*data);
	mlx_hook((*data)->win, 2, 1L << 0, key_event, data);
	mlx_hook((*data)->win, 17, 1L << 1, map_format_error, data);
	mlx_loop((*data)->mlx);
}

void	ft_pimage_update(t_data **data, char *str)
{
	(*data)->img[0] = mlx_xpm_file_to_image((*data)->mlx, str, \
			&(*data)->img_x, &(*data)->img_y);
}
